/*------------------------------------------------------------------------------
* Created by Feng Zhou on 2020-09-25
*
* main entry of run_GOOD.exe
*-----------------------------------------------------------------------------*/
#include "GOOD.h"
#include "StringUtil.h"
#include "PreProcess.h"


/* ppp_run main --------------------------------------------------------------*/
int main(int argc, char * argv[])
{
    int readCfgMode = 0;  /* reading mode for configuration file, TXT or YAML */

#ifdef _WIN32  /* for Windows */

#ifdef _DEBUG
    char cfgFile[1000] = "E:\\GNSS_Data_Download\\GOOD_Fusing\\GOOD_Fusing_cfg.yaml";
    readCfgMode = readCfgYaml;
#else
    char *cfgFile;
    if (argc == 1)
    {
        cout << endl;
        cout << "*** WARNING: The input command-line parameter indicating configure file is lost, please check it!" << endl;
        cout << endl;
        cout << "*** INFO: For example, type 'run_GOOD.exe GOOD_cfg.txt' or 'run_GOOD.exe GOOD_cfg.txt cfg_txt' or 'run_GOOD.exe GOOD_cfg.yaml cfg_yaml'" << endl;
        cout << endl << endl;
        cout << "--------------------------------------------- Information of GAMP II - GOOD ---------------------------------------------" << endl;
        cout << "*** INFO: The current version of GAMP II - GOOD is 2.1" << endl;
        cout << "*** INFO: GOOD is short for Gnss Observations and prOducts Downloader" << endl;
        cout << "*** INFO: GOOD is developed by SpAtial SurveyIng and Navigation (SASIN) group "
            "at Shandong University of Science and Technology (SDUST)" << endl;
        cout << "*** INFO: Copyright (C) 2020-2099 by SASIN, all rights reserved" << endl;
        cout << "--------------------------------------------- Information of GAMP II - GOOD ---------------------------------------------" << endl;

        return 0;
    }
    else
    {
        if (argc == 2)
        {
            cfgFile = argv[1];
            readCfgMode = readCfgTxt;
        }
        else if (argc == 3)
        {
            cfgFile = argv[1];
            string sReadCfgMode = argv[2];
            StringUtil str;
            str.ToUpper(sReadCfgMode);
            if (sReadCfgMode == "CFG_TXT") readCfgMode = readCfgTxt;
            else if (sReadCfgMode == "CFG_YAML") readCfgMode = readCfgYaml;
            else
            {
                cout << "*** ERROR: error in setting reading mode for configuration file, please check the command line!" << endl;

                return 0;
            }
        }
        else
        {
            cfgFile = argv[0];

            return 0;
        }
    }
#endif

#else          /* for Linux or Mac */
    char *cfgFile;
    if (argc == 1)
    {
        cout << endl;
        cout << "*** WARNING: The input command-line parameter indicating configure file is lost, please check it!" << endl;
        cout << endl;
        cout << "*** INFO: For example, type 'run_GOOD GOOD_cfg.txt' or 'run_GOOD GOOD_cfg.txt cfg_txt' or 'run_GOOD GOOD_cfg.yaml cfg_yaml'" << endl;
        cout << endl << endl;
        cout << "--------------------------------------------- Information of GAMP II - GOOD ---------------------------------------------" << endl;
        cout << "*** INFO: The current version of GAMP II - GOOD is 2.1" << endl;
        cout << "*** INFO: GOOD is short for Gnss Observations and prOducts Downloader" << endl;
        cout << "*** INFO: GOOD is developed by SpAtial SurveyIng and Navigation (SASIN) group "
            "at Shandong University of Science and Technology (SDUST)" << endl;
        cout << "*** INFO: Copyright (C) 2020-2099 by SASIN, all rights reserved" << endl;
        cout << "--------------------------------------------- Information of GAMP II - GOOD ---------------------------------------------" << endl;

        return 0;
    }
    else
    {
        if (argc == 2)
        {
            cfgFile = argv[1];
            readCfgMode = readCfgTxt;
        }
        else if (argc == 3)
        {
            cfgFile = argv[1];
            string sReadCfgMode = argv[2];
            StringUtil str;
            str.ToUpper(sReadCfgMode);
            if (sReadCfgMode == "CFG_TXT") readCfgMode = readCfgTxt;
            else if (sReadCfgMode == "CFG_YAML") readCfgMode = readCfgYaml;
            else
            {
                cout << "*** ERROR: error in setting reading mode for configuration file, please check the command line!" << endl;

                return 0;
            }
        }
        else
        {
            cfgFile = argv[0];

            return 0;
        }
    }
#endif

    PreProcess preProc;
    preProc.run(cfgFile, readCfgMode);

#if (defined(_WIN32) && defined(_DEBUG))  /* for Windows */
    cout << "Press any key to exit!" << endl;
    getchar();
#endif

    return 0;
}