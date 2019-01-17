/*
 * Gpio.h
 *
 *  Created on: Jan 15, 2019
 *      Author: marco
 */

#ifndef HAL_GPIO_GPIO_H_
#define HAL_GPIO_GPIO_H_

#include <cstdint>
#include "Gpio_cfg.h"

class Gpio
{

public:
    Gpio();
    ~Gpio();
    void Init();
    State ReadChannel(Channel);
    void WriteChannel(Channel, State);
    void ToggleChannel(Channel);
    void WriteToRegister();
};

#endif /* HAL_GPIO_GPIO_H_ */
