/*Meridian.h
  This is a library to drive a communication system for humanoid robots.
  It operates numerous servo motors and 9-axis sensors at 100 Hz and links status information with a PC in real time.
  Created by Ninagawa123. October 30, 2022.
  MIT license.*/

#ifndef Meridian_h
#define Meridian_h
#include "Arduino.h"

namespace arduino {
namespace robotics {
namespace espteensy {
namespace meridian {

  class Meridian{
  public:
    short cksm_val(short arr[], int len);
    bool cksm_rslt(short arr[], int len);
    short float2HfShort(float val);
    float HfShort2float(short val);
  };

} // Meridian
} // espteensy
} // robotics
} // arduino

#ifndef ARDUINO_ROBOTICS_ESPTEENSY_MERIDIAN_NAMESPACE_BEGIN
#define ARDUINO_ROBOTICS_ESPTEENSY_MERIDIAN_NAMESPACE_BEGIN namespace arduino { namespace robotics { namespace espteensy { namespace meridian {
#endif
#ifndef ARDUINO_ROBOTICS_ESPTEENSY_MERIDIAN_NAMESPACE_END
#define ARDUINO_ROBOTICS_ESPTEENSY_MERIDIAN_NAMESPACE_END   }}}}
#endif

namespace MERIDIANFLOW = arduino::robotics::espteensy::meridian;

#endif // Meridian_h
