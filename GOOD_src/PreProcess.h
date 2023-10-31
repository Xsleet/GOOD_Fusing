/*------------------------------------------------------------------------------
* PreProcess.h : header file of PreProcess.cpp
*-----------------------------------------------------------------------------*/
#pragma once

class PreProcess
{
private:

    /**
    * @brief   : init - some initializations before processing
    * @param[O]: popt (processing options)
    * @param[O]: fopt (FTP options, nullptr:NO output)
    * @return  : none
    * @note    :
    **/
    void init(prcopt_t *popt, ftpopt_t *fopt);

    /**
    * @brief   : ReadCfgTxt - read configure file with TXT format to get processing options
    * @param[I]: cfgFile (configure file)
    * @param[O]: popt (processing options)
    * @param[O]: fopt (FTP options, nullptr:NO output)
    * @return  : true:ok, false:error
    * @note    :
    **/
    bool ReadCfgTxt(const char *cfgFile, prcopt_t *popt, ftpopt_t *fopt);

    /**
    * @brief   : ReadCfgYaml - read configure file with with YAML format to get processing options
    * @param[I]: cfgFile (configure file)
    * @param[O]: popt (processing options)
    * @param[O]: fopt (FTP options, nullptr:NO output)
    * @return  : true:ok, false:error
    * @note    :
    **/
    bool ReadCfgYaml(string cfgFile, prcopt_t *popt, ftpopt_t *fopt);

public:
    PreProcess()
	{

	}
	~PreProcess()
	{

	}

    /**
    * @brief   : run - start GOOD processing
    * @param[I]: cfgFile (configure file with full path)
    * @param[I]: readCfgMode (1: TXT  2: YAML)
    * @param[O]: none
    * @return  : none
    * @note    :
    **/
    void run(const char *cfgFile, int readCfgMode);
};