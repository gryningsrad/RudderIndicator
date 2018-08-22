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
  private:
  void SetPortHight(int port);
  void SetPortLow(int port);
  public:
  // Ports numbers
  int DS;
  int OE;
  int ST_CP;
  int SH_CP;
  int MR;
  // Functions
  ShiftRegister595::ShiftRegister(uint8_t P_DS, uint8_t _DS, uint8_t P_OE, uint8_t _OE, uint8_t P_ST_CP, uint8_t _ST_CP, uint8_t P_SH_CP, uint8_t _SH_CP, uint8_t P_MR, uint8_t _MR)
  void ST_CL_Pulse(); // Storage Clock
  void SH_CL_Pulse(); // Shift to output register
  void MR(int status); // MasterReset function 0=low, 1=high
  void OE(int status); // Enable Output, 0=low, 1=high
  int WriteData(uint8 data); // Write 8bits of data
}



#endif
