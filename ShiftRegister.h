/* ##    Header file for the handling of shift register


*/

#ifndef __ShiftRegister_H_INCLUDED__   // if x.h hasn't been included yet...
#define __ShiftRegister_H_INCLUDED__

//=================================
// Define new class
class ShiftReg595;

//=================================
// Dependencies
#include <avr/delay.h>

//=================================
// The class
class ShiftReg595
{
  public:
  // Ports
  int DS;
  int OE;
  int ST_CP;
  int SH_CP;
  int MR;
}


//=================================
// Functions

// Output clockpulse to ST_CL
void ST_CL_Pulse()
{
  
}

// Output clockpulse to SH_CL
void SH_CL_Pulse()
{

}

// Function to set port high/low
private void SetPortHigh(int port)
{

}

private void SetPortLow(int port)
{

}


#endif
