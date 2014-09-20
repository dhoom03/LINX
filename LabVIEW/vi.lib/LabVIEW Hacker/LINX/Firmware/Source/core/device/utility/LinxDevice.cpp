/****************************************************************************************
**  Includes
****************************************************************************************/
#include <stdio.h>
#include "LinxDevice.h"


/****************************************************************************************
**  Constructors
****************************************************************************************/
LinxDevice::LinxDevice()
{
	DeviceFamily = 0xFE;
	DeviceID = 0x00;
}

/****************************************************************************************
**  Functions
****************************************************************************************/

//Reverse The Order Of Bits In A Byte.  This Is Useful For SPI Hardware That Does Not Support Bit Order
unsigned char LinxDevice::ReverseBits(unsigned char b) 
{
	b = (b & 0xF0) >> 4 | (b & 0x0F) << 4;
	b = (b & 0xCC) >> 2 | (b & 0x33) << 2;
	b = (b & 0xAA) >> 1 | (b & 0x55) << 1;
	return b;
}

//-------------------Default Empty Functions--------------------------------
void LinxDevice::DelayMs(unsigned long ms)
{

}

//Debug
void LinxDevice::DebugPrint(unsigned char numBytes, const char* message)
{

}

void LinxDevice::DebugPrint(const char *s)
{

}

void LinxDevice::DebugPrintPacket(unsigned char direction, const unsigned char* packetBuffer)
{

}