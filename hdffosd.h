/*
 * hdffosd.h: Implementation of the DVB HD Full Featured On Screen Display
 *
 * See the README file for copyright information and how to reach the author.
 *
 * $Id: hdffosd.h 1.1 2009/12/29 14:27:48 kls Exp $
 */

#ifndef _HDFF_OSD_H_
#define _HDFF_OSD_H_

#include <vdr/osd.h>

#include "hdffcmd.h"

class cHdffOsdProvider : public cOsdProvider
{
private:
    HDFF::cHdffCmdIf * mHdffCmdIf;
public:
    cHdffOsdProvider(HDFF::cHdffCmdIf * pHdffCmdIf);
    virtual cOsd *CreateOsd(int Left, int Top, uint Level);
};

#endif