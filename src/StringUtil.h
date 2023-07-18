/*------------------------------------------------------------------------------
* StringUtil.h : header file of StringUtil.cpp
*-----------------------------------------------------------------------------*/
#pragma once

class StringUtil
{
private:


public:
    StringUtil()
	{

	}
	~StringUtil()
	{

	}

    /**
    * @brief   : wwww2str - convert from integer week to string week
    * @param[I]: wwww (3- or 4-digit GPS week)
    * @param[O]: none
    * @return  : wwww in string format
    * @note    :
    **/
    string wwww2str(int wwww);

    /**
    * @brief   : yyyy2str - convert from integer yyyy to string yyyy
    * @param[I]: yyyy (4-digit year)
    * @param[O]: none
    * @return  : yyyy in string format
    * @note    :
    **/
    string yyyy2str(int yyyy);

    /**
    * @brief   : yy2str - convert from integer yy to string yy
    * @param[I]: yy (2-digit year)
    * @param[O]: none
    * @return  : yy in string format
    * @note    :
    **/
    string yy2str(int yy);

    /**
    * @brief   : doy2str - convert from integer DOY to string DOY
    * @param[I]: doy (day of year)
    * @param[O]: none
    * @return  : DOY in string format
    * @note    :
    **/
    string doy2str(int doy);

    /**
    * @brief   : mm2str - convert from integer month to string month
    * @param[I]: mm (1 - or 2-digit month)
    * @param[O]: none
    * @return  : mm in string format
    * @note    :
    **/
    string mm2str(int mm);

    /**
    * @brief   : hh2str - convert from integer hour to string hour
    * @param[I]: hh (1 - or 2-digit hour)
    * @param[O]: none
    * @return  : hh in string format
    * @note    :
    **/
    string hh2str(int hh);

    /**
    * @brief     : ToUpper - convert the string from lower case to upper case
    * @param[I/O]: str (string)
    * @return    : none
    * @note      :
    **/
    void ToUpper(string &str);

    /**
    * @brief     : ToLower - convert the string from upper case to lower case
    * @param[I/O]: str (string)
    * @return    : none
    * @note      :
    **/
    void ToLower(string &str);
    
    /**
    * @brief   : str2num - convert substring in string to number
    * @param[I]: s (string ("... nnn.nnn ..."))
    * @param[I]: i,n (substring position and width)
    * @param[O]: none
    * @return  : converted number (0.0:error)
    * @note    :
    **/
    double str2num(const char *s, int i, int n);

    /**
    * @brief   : num2str - convert number to string
    * @param[I]: num (integer number)
    * @param[I]: len (length of the string)
    * @param[O]: str (string)
    * @return  : none
    * @note    :
    **/
    void num2str(int num, char *str, int len);

    /**
    * @brief   : 
    - set string without tail space
    * @param[O]: dst (destination string)
    * @param[I]: src (source string)
    * @param[I]: n (substring width)
    * @return  : none
    * @note    :
    **/
    void SetStr(char *dst, const char *src, int n);

    /**
    * @brief   : StrMid - string clipping
    * @param[O]: dst (destination string)
    * @param[I]: src (source string)
    * @param[I]: nPos (start position)
    * @param[I]: nCount (number of selected characters)
    * @return  : none
    * @note    :
    **/
    void StrMid(char *dst, const char *src, int nPos, int nCount);

    /**
    * @brief     : TrimSpace4String - trim head and tail space of the string
    * @param[I/O]: s (input string with head and tail space; output string without head and tail space)
    * @return    : none
    * @note      :
    **/
    void TrimSpace4String(string &s);

    /**
    * @brief     : TrimSpace - trim head and tail space of the string
    * @param[I/O]: dstsrc (destination string (may be with head and tail space) and
    *              source string (without head and tail space))
    * @return    : none
    * @note      :
    **/
    void TrimSpace4Char(char *dstsrc);

    /**
    * @brief     : CutFilePathSep -
    * @param[I/O]: strPath (input/output path string)
    * @return    : none
    * @note      :
    **/
    void CutFilePathSep(char *strPath);

    /**
    * @brief   : GetFile - get the full name of a specific file from the current directory
    * @param[I]: dir (the current directory)
    * @param[I]: str (string to match)
    * @param[O]: fileName (the full name of a specific file)
    * @return  : true: found, false: NOT found
    * @note    :
    **/
    bool GetFile(string dir, string str, string &fileName);

    /**
    * @brief   : GetFilesAll - get the name list of all the files from the current directory
    * @param[I]: dir (the current directory)
    * @param[I]: suffix (file suffix)
    * @param[O]: files (the name list of all the files)
    * @return  : none
    * @note    :
    **/
    void GetFilesAll(string dir, string suffix, vector<string> &files);

    /**
    * @brief   : GetSubStr - get sub-string in a vector from a string
    * @param[I]: str (string)
    * @param[I]: sep (delimiter)
    * @param[O]: subStrs (sub strings)
    * @return  : none
    * @note    :
    **/
    void GetSubStr(string str, string sep, vector<string> &subStrs);
};