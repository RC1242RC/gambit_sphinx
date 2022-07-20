---
title: 'file src/Flav_reader.cpp'

description: "[No description available]"

---






[No description available] [More...](#detailed-description)

## Namespaces

| Name           |
| -------------- |
| **[Gambit](/documentation/code/namespaces/namespacegambit/)** <br>TODO: see if we can use this one:  |
| **[Gambit::FlavBit](/documentation/code/namespaces/namespacegambit_1_1flavbit/)**  |

## Detailed Description


**Author**: 

  * Marcin Chrzaszcz 
  * Pat Scott ([p.scott@imperial.ac.uk](mailto:p.scott@imperial.ac.uk)) 
  * Tomas Gonzalo ([t.e.gonzalo@fys.uio.no](mailto:t.e.gonzalo@fys.uio.no)) 


**Date**: 

  * 2015 May 
  * 2016 July 
  * 2016 August
  * 2017 Mar
  * 2017 Oct


Implementation of reader class for FlavBit YAML database.



------------------

Authors (add name and date if you modify):



------------------




## Source code

```
//   GAMBIT: Global and Modular BSM Inference Tool
//   *********************************************

#include "gambit/Elements/gambit_module_headers.hpp"
#include "gambit/FlavBit/FlavBit_rollcall.hpp"
#include "gambit/FlavBit/Flav_reader.hpp"


namespace Gambit
{

  namespace FlavBit
  {

    using namespace std;

    void operator >> (const YAML::Node& node, Correlation& c)
    {
      // safety
      string name = node["name"].as<std::string>();
      if (name == "NONE") return;
      // reading correlation
      c.corr_name= name;
      c.corr_val = node["value"].as<double>();
    }

    void operator >> (const YAML::Node& node, Measurement& v)
    {
      v.name=node["name"].as<std::string>();
      v.is_limit = node["islimit"].as<bool>();
      v.exp_value= node["exp_value"].as<double>();
      if(node["exp_90_CL"]) v.exp_90_CL = node["exp_90_CL"].as<double>(); 
      if(node["exp_95_CL"]) v.exp_95_CL = node["exp_95_CL"].as<double>();
      if(node["one_sided"]) v.exp_one_sided = node["one_sided"].as<bool>(); 
      v.exp_source = node["exp_source"].as<std::string>();
      v.exp_stat_error = node["exp_stat_error"].as<double>();
      v.exp_sys_error = node["exp_sys_error"].as<double>();
      if(v.is_limit and !v.exp_stat_error and (v.exp_90_CL or v.exp_95_CL))
      {
        v.exp_stat_error = 
          Flav_reader::get_error_from_confidence_levels(v.exp_value, v.exp_90_CL, v.exp_95_CL, v.exp_one_sided);
      }
      v.exp_error=sqrt( v.exp_stat_error*v.exp_stat_error + v.exp_sys_error*v.exp_sys_error );
      v.th_error=node["th_error"].as<double>();
      v.th_error_type=node["th_error_type"].as<std::string>();
      v.th_error_source = node["th_error_source"].as<std::string>();
      const YAML::Node& correlations = node["correlation"];
      v.corr.clear();
      for (unsigned i=0; i<correlations.size(); ++i)
      {
        Correlation corr_tmp;
        correlations[i] >> corr_tmp;
        if (corr_tmp.corr_name != "") v.corr.push_back(corr_tmp);
      }
    }

    Flav_reader::Flav_reader(string loc)
    {
      measurements=vector< Measurement >(0);
      measurement_location=loc;
      debug=false;
      use_S=true;
      use_P=false;
      number_measurements=0;
    }

    void Flav_reader::read_yaml(string name)
    {
      string path=measurement_location+"/"+name;
      std::ifstream fin(path.c_str());
      YAML::Node doc = YAML::Load(fin);
      number_measurements=0;
      for(unsigned i=0;i<doc.size();++i)
      {
        Measurement mes_tmp;
        doc[i] >> mes_tmp;
        if(debug) print(mes_tmp);
        measurements.push_back(mes_tmp);
        number_measurements++;
      }
      if (debug) cout<<"Number of measurements: "<<number_measurements<<endl;
    }

    void Flav_reader::read_yaml_measurement(string name, string measurement_name)
    {
      string path=measurement_location+"/"+name;
      std::ifstream fin(path.c_str());
      YAML::Node doc = YAML::Load(fin);
      Measurement mes_tmp;

      if (debug) cout << measurement_name.c_str() << endl;

      for (unsigned i=0; i<doc.size(); ++i)
      {
        Measurement mes_tmp;
        doc[i] >> mes_tmp;
        if(mes_tmp.name!=measurement_name.c_str()) continue;
        measurements.push_back(mes_tmp);
        number_measurements++;
        if (debug) cout << "Read in " << measurement_name << " " << mes_tmp.name << " " << mes_tmp.exp_value << endl;
      }
      if(debug) cout << "Number of measurements: " << number_measurements << endl;
    }

    void Flav_reader::print(Measurement mes)
    {
      cout<<"################### Mesurement"<<endl;
      cout<<"Name: "<<mes.name<<endl;
      cout<<(mes.is_limit ? "Limit" : "Value")<<": "<<mes.exp_value<<endl;
      cout<<"Stat/sys errror: "<< mes.exp_stat_error<<"/"<<mes.exp_sys_error<<endl;
      cout<<"Error plus/minus: "<<mes.exp_error<<endl;
      cout<<"Experimental source: "<<mes.exp_source<<endl;
      cout<<"Correlations:"<<endl;
      for(unsigned i=0;i<mes.corr.size();++i)
      {
        cout<<mes.corr[i].corr_name<<"  "<<mes.corr[i].corr_val<<endl;
      }
      cout<<"########## END"<<endl;
    }

    void Flav_reader::initialise_matrices()
    {
      // Create the correlation matrix
      M_cor_cov = boost::numeric::ublas::identity_matrix<double>(number_measurements);
      for(int i=0; i<number_measurements; ++i)
      {
        #ifdef FLAVBIT_DEBUG
          cout<<"Correlation size: "<< measurements[i].corr.size()<<endl;
        #endif
        for ( unsigned icorr=0; icorr< measurements[i].corr.size(); ++icorr)
        {
          #ifdef FLAVBIT_DEBUG
            cout<<"Searching for correlation: "<< measurements[i].corr[icorr].corr_name <<endl;
          #endif
          int i_corr_index=get_measurement_for_corr(measurements[i].corr[icorr].corr_name  );
          M_cor_cov(i_corr_index,i)=measurements[i].corr[icorr].corr_val;
        }
      }
      if (debug) print_matrix(M_cor_cov,"Correlation Matrix:");

      // Make sure the correlation matrix is symmetric and has 1s on the diagonal
      check_corr_matrix(M_cor_cov);

      // Convert the correlation matrix to a covariance matrix
      for(int i=0; i<number_measurements;++i)
      {
        for(int j=0;j<number_measurements;++j)
        {
          M_cor_cov(i,j)=M_cor_cov(i,j)*(measurements[i].exp_error)*(measurements[j].exp_error);
        }
      }
      if (debug) print_matrix(M_cor_cov,"Covariance Matrix:");

      // Construct the the measurement vector
      M_measurements= boost::numeric::ublas::matrix<double> (number_measurements,1);
      for(int i=0; i<number_measurements;++i)
      {
        M_measurements(i,0)=measurements[i].exp_value;
      }
      if (debug) print_matrix(M_measurements, "Measurements:", false);

      // Construct the theory error vector
      M_th_err = boost::numeric::ublas::matrix< std::pair<double,bool> > (number_measurements,1);
      for(int i=0; i<number_measurements;++i)
      {
        M_th_err(i,0).first = measurements[i].th_error;
        str err_type = measurements[i].th_error_type;
        if (err_type == "A") M_th_err(i,0).second = true;
        else if (err_type == "M") M_th_err(i,0).second = false;
        else FlavBit_error().raise(LOCAL_INFO, "Unrecognised theory error type in database: "+err_type);
      }
      if (debug) print_matrix(M_th_err, "Theory errors:", false);

    }

    int Flav_reader::get_measurement_for_corr(string ss)
    {
      for(int i=0;i<number_measurements;++i)
      {
        if(measurements[i].name == ss) return i;
      }
      cout<<"Error!, didn't find measuremnet: "<<ss<<endl;
      return -1;
    }

    void Flav_reader::print_matrix(boost::numeric::ublas::matrix<double>& M, str name, bool is_true_matrix)
    {
      int jmax = is_true_matrix ? number_measurements : 1;
      cout<<name<<endl;
      for(int i=0; i < number_measurements; ++i)
      {
        for(int j=0 ; j< jmax; ++j) cout<<M(i,j)<<"\t";
        cout<<endl;
      }
    }

    void Flav_reader::print_matrix(boost::numeric::ublas::matrix< std::pair<double, bool> >& M, str name, bool is_true_matrix)
    {
      int jmax = is_true_matrix ? number_measurements : 1;
      cout<<name<<endl;
      for(int i=0; i < number_measurements; ++i)
      {
        for(int j=0 ; j< jmax; ++j) cout<<M(i,j).first<<":"<<M(i,j).second<<"\t";
        cout<<endl;
      }
    }

    void Flav_reader::check_corr_matrix(boost::numeric::ublas::matrix<double>& M)
    {
      for( int i=0; i < number_measurements; ++i)
      {
        for( int j=0 ; j< number_measurements; ++j)
        {
          if (i==j && M(i,i)!=1)
          {
            FlavBit_error().raise(LOCAL_INFO, "Correlation matrix diagonal element differs from 1!");
          }
          if (M(i,j) != M(j,i))
          {
            cout << "Correlation matrix " << i << "," << j << " = " << M(i,j) << endl;
            cout << "Correlation matrix " << i << "," << j << " = " << M(j,i) << endl;
            FlavBit_error().raise(LOCAL_INFO, "Correlation matrix not symmetric");
          }
        }
      }
    }

    double Flav_reader::get_error_from_confidence_levels(double exp_value, double CL_90, double CL_95, bool one_sided)
    {
      double error = 0;
      if(one_sided)
      {
        if(CL_90 != 0)
          error = fabs(exp_value - CL_90)/1.28;
        else if (CL_95 != 0)
          error =fabs(exp_value - CL_95)/1.64;
      }
      else
      {
        if(CL_90 != 0)
          error = fabs(exp_value - CL_90)/1.64;
        else if(CL_95 != 0)
          error = fabs(exp_value - CL_95)/1.96;
      }
      return error;

    }
  }
}
```


-------------------------------

Updated on 2022-07-20 at 17:18:45 +0000
