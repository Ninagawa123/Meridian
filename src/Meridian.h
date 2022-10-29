/*Meridian.h
  This is a library to drive a communication system for humanoid robots.
  It operates numerous servo motors and 9-axis sensors at 100 Hz and links status information with a PC in real time.
  Created by Ninagawa123. October 29, 2022.
  MIT license.*/

#ifndef Meridian_h
#define Meridian_h
#include "Arduino.h"

class checksum_val
{
  public:
    checksum_val(short _arr[], int _len);
  private:
    int i;
    int _cksm;
};

#endif
