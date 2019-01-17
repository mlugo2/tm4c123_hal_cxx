/*
 * main.cpp
 *
 *  Created on: Jan 12, 2019
 *      Author: marco
 */

#include <cstdint>
#include "HAL/tm4c123gh6pm.h"

int main()
{
    SYSCTL_RCGC2_R = SYSCTL_RCGC2_GPIOF;
    GPIO_PORTF_DIR_R = 0x08;
    GPIO_PORTF_DEN_R = 0x08;

    volatile uint32_t i;

    while(true) {

        GPIO_PORTF_DATA_R |= 0x08;
        for(i=0; i<2000000; i++);
        GPIO_PORTF_DATA_R &= ~(0x08);
        for(i=0; i<2000000; i++);

    }
}
