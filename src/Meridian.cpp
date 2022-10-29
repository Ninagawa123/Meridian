#include "arduino.h"
#include "Meridian.h"

ARDUINO_ROBOTICS_ESPTEENSY_MERIDIAN_NAMESPACE_BEGIN

// +----------------------------------------------------------------------
// | func name : cksm_val(short arr[], int len)
// +----------------------------------------------------------------------
// | function  : calculate checksum of Meridim
// | argument1 : short, Meridim array
// | argument2 : int,   Length of array
// | return    : short, checksum value 
// +----------------------------------------------------------------------
short Meridian::cksm_val(short arr[], int len)
{
    int cksm = 0;
    for (int i = 0; i < len - 1; i++)
    {
        cksm += int(arr[i]);
    }
    return short(~cksm);
}

// +----------------------------------------------------------------------
// | func name : cksm_rslt(short arr[], int len)
// +----------------------------------------------------------------------
// | function  : evaluate checksum of Meridim
// | argument1 : short, Meridim array
// | argument2 : int,   Length of array
// | return    : bool,  OK is True, NG is False 
// +----------------------------------------------------------------------
bool Meridian::cksm_rslt(short arr[], int len)
{
    int cksm = 0;
    for (int i = 0; i < len - 1; i++)
    {
        cksm += int(arr[i]);
    }
    if (short(~cksm) == arr[len - 1])
    {
        return true;
    }
    return false;
}


// +----------------------------------------------------------------------
// | func name : float2HfShort(float val)
// +----------------------------------------------------------------------
// | function  : Float type value multiplied by 100 to short type
// | argument  : float, -327.67 to 327.67
// | return    : short, -32767 to 32767, Returns a value within the limit
// +----------------------------------------------------------------------
short Meridian::float2HfShort(float val)
{
    int x = round(val * 100);
    if (x > 32766)
    {
        x = 32767;
    }
    else if (x < -32766)
    {
        x = -32767;
    }
    return (short)x;
}

// +----------------------------------------------------------------------
// | func name : HfShort2float(short val)
// +----------------------------------------------------------------------
// | function  : Short type value divided by 100 for float type
// | argument  : short
// | return    : float
// +----------------------------------------------------------------------
float Meridian::HfShort2float(short val)
{
    return (float)val / 100;
}

ARDUINO_ROBOTICS_ESPTEENSY_MERIDIAN_NAMESPACE_END
