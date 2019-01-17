/*
 * Gpio_cfg.h
 *
 *  Created on: Jan 15, 2019
 *      Author: marco
 */

#ifndef HAL_GPIO_CFG_H_
#define HAL_GPIO_CFG_H_

#include <array>
#include "HAL/tm4c123gh6pm.h"

namespace {
    #define NUM_OF_CHANNELS_PER_PORT    8u
    #define NUM_OF_PORTS                6u
    #define NUM_OF_DIGITAL_PINS         48u

    enum class State: uint8_t {
        LOW,
        HIGH
    };

    enum class Channel: uint8_t {
        PORTA_0,
        PORTA_1,
        PORTA_2,
        PORTA_3,
        PORTA_4,
        PORTA_5,
        PORTA_6,
        PORTA_7,

        PORTB_0,
        PORTB_1,
        PORTB_2,
        PORTB_3,
        PORTB_4,
        PORTB_5,
        PORTB_6,
        PORTB_7,

        PORTC_0,
        PORTC_1,
        PORTC_2,
        PORTC_3,
        PORTC_4,
        PORTC_5,
        PORTC_6,
        PORTC_7,

        PORTD_0,
        PORTD_1,
        PORTD_2,
        PORTD_3,
        PORTD_4,
        PORTD_5,
        PORTD_6,
        PORTD_7,

        PORTE_0,
        PORTE_1,
        PORTE_2,
        PORTE_3,
        PORTE_4,
        PORTE_5,
        PORTE_6,
        PORTE_7,

        PORTF_0,
        PORTF_1,
        PORTF_2,
        PORTF_3,
        PORTF_4,
        PORTF_5,
        PORTF_6,
        PORTF_7,
    };

    enum class Fun: uint8_t {
        GPIO,
        PERIPH
    };

    enum class Dir: uint8_t {
        INPUT,
        OUTPUT
    };

    enum class Den: uint8_t {
        DISABLE,
        ENABLE
    };

    enum class Sense: uint8_t {
        EDGE,
        LEVEL
    };

    enum class BothEdges: uint8_t {
        EVENT,
        BOTH
    };

    enum class Event: uint8_t {
        FALLING,
        RISING
    };

    enum class Clear: uint8_t {
        NOOP,
        CLEAR
    };

    enum class Mask: uint8_t {
        DISABLE,
        ENABLE
    };

    typedef struct {
        Channel channel;
        State state;
        Fun function;
        Dir direction;
        Den digital;
        Sense sense;
        BothEdges both;
        Event event;
        Clear clear;
        Mask mask;
    } Config;

    constexpr std::array<Config, NUM_OF_DIGITAL_PINS> mConfigTable {
        {
          {Channel::PORTA_0, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTA_1, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTA_2, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTA_3, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTA_4, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTA_5, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTA_6, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTA_7, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},

          {Channel::PORTB_0, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTB_1, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTB_2, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTB_3, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTB_4, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTB_5, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTB_6, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTB_7, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},

          {Channel::PORTC_0, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTC_1, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTC_2, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTC_3, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTC_4, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTC_5, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTC_6, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTC_7, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},

          {Channel::PORTD_0, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTD_1, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTD_2, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTD_3, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTD_4, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTD_5, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTD_6, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTD_7, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},

          {Channel::PORTE_0, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTE_1, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTE_2, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTE_3, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTE_4, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTE_5, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTE_6, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTE_7, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},

          {Channel::PORTF_0, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTF_1, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTF_2, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTF_3, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTF_4, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTF_5, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTF_6, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
          {Channel::PORTF_7, State::LOW, Fun::GPIO, Dir::INPUT, Den::DISABLE, Sense::EDGE, BothEdges::BOTH, Event::FALLING, Clear::NOOP, Mask::DISABLE},
        }
    };

    uint32_t mPortFun[NUM_OF_PORTS] =
    {
        GPIO_PORTA_AFSEL_R,
        GPIO_PORTB_AFSEL_R,
        GPIO_PORTC_AFSEL_R,
        GPIO_PORTD_AFSEL_R,
        GPIO_PORTE_AFSEL_R,
        GPIO_PORTF_AFSEL_R,
    };

    uint32_t portCtrl[NUM_OF_PORTS] =
    {
        GPIO_PORTA_PCTL_R,
        GPIO_PORTB_PCTL_R,
        GPIO_PORTC_PCTL_R,
        GPIO_PORTD_PCTL_R,
        GPIO_PORTE_PCTL_R,
        GPIO_PORTF_PCTL_R,
    };

    /**
    *   Defines a table of pointers to the Port Data Register
    */
    uint32_t portData[NUM_OF_PORTS] =
    {
        GPIO_PORTA_DATA_R,
        GPIO_PORTB_DATA_R,
        GPIO_PORTC_DATA_R,
        GPIO_PORTD_DATA_R,
        GPIO_PORTE_DATA_R,
        GPIO_PORTF_DATA_R
    };

    uint32_t portDir[NUM_OF_PORTS] =
    {
        GPIO_PORTA_DIR_R,
        GPIO_PORTB_DIR_R,
        GPIO_PORTC_DIR_R,
        GPIO_PORTD_DIR_R,
        GPIO_PORTE_DIR_R,
        GPIO_PORTF_DIR_R
    };

    uint32_t portDen[NUM_OF_PORTS] =
    {
        GPIO_PORTA_DEN_R,
        GPIO_PORTB_DEN_R,
        GPIO_PORTC_DEN_R,
        GPIO_PORTD_DEN_R,
        GPIO_PORTE_DEN_R,
        GPIO_PORTF_DEN_R
    };

    uint32_t portIS[NUM_OF_PORTS] =
    {
        GPIO_PORTA_IS_R,
        GPIO_PORTB_IS_R,
        GPIO_PORTC_IS_R,
        GPIO_PORTD_IS_R,
        GPIO_PORTE_IS_R,
        GPIO_PORTF_IS_R
    };

    uint32_t portIBE[NUM_OF_PORTS] =
    {
        GPIO_PORTA_IBE_R,
        GPIO_PORTB_IBE_R,
        GPIO_PORTC_IBE_R,
        GPIO_PORTD_IBE_R,
        GPIO_PORTE_IBE_R,
        GPIO_PORTF_IBE_R
    };

    uint32_t portIEV[NUM_OF_PORTS] =
    {
        GPIO_PORTA_IEV_R,
        GPIO_PORTB_IEV_R,
        GPIO_PORTC_IEV_R,
        GPIO_PORTD_IEV_R,
        GPIO_PORTE_IEV_R,
        GPIO_PORTF_IEV_R
    };

    uint32_t portICR[NUM_OF_PORTS] =
    {
        GPIO_PORTA_ICR_R,
        GPIO_PORTB_ICR_R,
        GPIO_PORTC_ICR_R,
        GPIO_PORTD_ICR_R,
        GPIO_PORTE_ICR_R,
        GPIO_PORTF_ICR_R
    };

    uint32_t portIM[NUM_OF_PORTS] =
    {
        GPIO_PORTA_IM_R,
        GPIO_PORTB_IM_R,
        GPIO_PORTC_IM_R,
        GPIO_PORTD_IM_R,
        GPIO_PORTE_IM_R,
        GPIO_PORTF_IM_R
    };
}

#endif /* HAL_GPIO_CFG_H_ */
