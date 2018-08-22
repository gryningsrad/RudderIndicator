#include "ShiftRegister595.h"

//================================
// Class definition
ShiftRegister595::ShiftRegister(uint8_t P_DS, uint8_t _DS, uint8_t P_OE, uint8_t _OE, uint8_t P_ST_CP, uint8_t _ST_CP, uint8_t P_SH_CP, uint8_t _SH_CP, uint8_t P_MR, uint8_t _MR)
{
  
  P_DS = P_DS;
  P_OE = P_OE;
  P_ST_CP = P_ST_CP;
  P_SH_CP = P_SH_CP;
  P_MR = P_MR;
  
  DS = _DS;
  OE = _OE;
  ST_CP = _ST_CP;
  SH_CP = _SH_CP;
  MR = _MR;
}


//=================================
// Functions

// Output clockpulse to ST_CL
void ShiftRegister595::ST_CL_Pulse()
{
  P_ST_CL |= (1 << ST_CL); // Set SH_CL HIGH
  P_ST_CL &= (~(0 << ST_CL)); // Set SH_CL LOW
}

// Output clockpulse to SH_CL
void ShiftRegister::SH_CL_Pulse()
{
  P_SH_CL |= (1 << SH_CL); // Set SH_CL HIGH
  _delay_loop_1(1);
  P_SH_CL &= (~(1 << SH_CL)); // Set SH_CL LOW
  _delay_loop_1(1);
}

int ShiftRegister::WriteData(uint8_t _data)
{
   for (uint8_t i=0; i<8;i++)
   {
     if(_data & 0b10000000)
      {
         //MSB = 1 => set DS high
         P_DS |= (1 << DS);
      }
      else
      {
         //MSB = 1 => set DS low
         P_DS &= (~(1 << DS));
      }
     
     ST_CL(); // Send clock pulse to "save" DS-bit
     _data = (_data<<1); // Shift next bit into MSB position
   }
}

// Function to set port high/low
private void ShiftRegister::SetPortHigh(int port)
{

}

private void ShiftRegister::SetPortLow(int port)
{

}

