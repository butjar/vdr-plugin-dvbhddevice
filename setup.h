/*
 * setup.h: Setup for the DVB HD Full Featured On Screen Display
 *
 * See the README file for copyright information and how to reach the author.
 *
 * $Id: setup.h 1.1 2009/12/29 14:28:12 kls Exp $
 */

#ifndef _HDFF_SETUP_H_
#define _HDFF_SETUP_H_

#include <vdr/plugin.h>
#include "hdffcmd.h"

struct cHdffSetup
{
    cHdffSetup(void);
    bool SetupParse(const char * Name, const char * Value);
    void GetOsdSize(int &Width, int &Height, double &PixelAspect);
    HDFF::eHdmiVideoMode GetVideoMode(void);

    int Resolution;
    int TvFormat;
    int VideoConversion;
    int OsdSize;
};

extern cHdffSetup gHdffSetup;

class cHdffSetupPage : public cMenuSetupPage
{
private:
    HDFF::cHdffCmdIf * mHdffCmdIf;
    cHdffSetup mNewHdffSetup;

protected:
    virtual void Store(void);

public:
    cHdffSetupPage(HDFF::cHdffCmdIf * pHdffCmdIf);
    virtual ~cHdffSetupPage(void);
};

#endif