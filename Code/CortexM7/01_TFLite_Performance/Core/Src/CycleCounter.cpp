#include "CycleCounter.h"
#include "main.h"


void ResetTimer(){
	CoreDebug->DEMCR |= 0x01000000;
	ITM->LAR = 0xC5ACCE55;
	DWT->CYCCNT = 0; // reset the counter
	DWT->CTRL &= ~0x00000001;
}

void StartTimer(){
	DWT->CTRL |= 0x00000001 ; // enable the counter
}

void StopTimer(){
	DWT->CTRL &= ~0x00000001; // disable the counter
}

unsigned int getCycles(){
	return DWT->CYCCNT ;
}

// Not defined in CMSIS 4.00 headers - check if defined
// to allow for possible correction in later versions
#ifndef DWT_LSR_Present_Msk
    #define DWT_LSR_Present_Msk ITM_LSR_Present_Msk
#endif

#ifndef  DWT_LSR_Access_Msk
    #define DWT_LSR_Access_Msk ITM_LSR_Access_Msk
#endif

#define DWT_LAR_KEY 0xC5ACCE55

void dwt_access_enable( unsigned char ena )
{
    uint32_t lsr = DWT->LSR;

    if( (lsr & DWT_LSR_Present_Msk) != 0 )
    {
        if( ena )
        {
            if ((lsr & DWT_LSR_Access_Msk) != 0) //locked: access need unlock
            {
                DWT->LAR = DWT_LAR_KEY;
            }
        }
        else
        {
            if ((lsr & DWT_LSR_Access_Msk) == 0) //unlocked
            {
                DWT->LAR = 0;
            }
        }
    }
}
