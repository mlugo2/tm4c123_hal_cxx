/*
 * Gpio.cpp
 *
 *  Created on: Jan 15, 2019
 *      Author: marco
 */

#include <HAL/Gpio/Gpio.h>

Gpio::Gpio()
{

}

Gpio::~Gpio()
{
    // TODO Auto-generated destructor stub
}

void Gpio::Init() {

    uint8_t portNum = 0;
    uint8_t pinNum = 0;

    // Loop through all the pins
    for (auto config : mConfigTable) {

        portNum = static_cast<uint8_t>(config.channel) / NUM_OF_CHANNELS_PER_PORT;
        pinNum = static_cast<uint8_t>(config.channel) % NUM_OF_CHANNELS_PER_PORT;

        // Set Function register bit for this channel
        (config.function == Fun::PERIPH) ? mPortFun[portNum] |= (1ul<<pinNum)
                                         : mPortFun[portNum] &= ~(1ul<<pinNum);
        // Set Data-Direction register bit for channel
        (config.direction == Dir::OUTPUT) ? portDir[portNum] |= (1ul<<pinNum)
                                          : portDir[portNum] &= ~(1ul<<pinNum);
        // Set Digital Enable register bit for this channel
        (config.digital == Den::ENABLE) ? portDen[portNum] |= (1ul<<pinNum)
                                        : portDen[portNum] &= ~(1ul<<pinNum);
        // Set Interrupt Sense register bit for this channel
        (config.sense == Sense::LEVEL) ? portIS[portNum] |= (1ul<<pinNum)
                                       : portIS[portNum] &= ~(1ul<<pinNum);
        // Set Interrupt Both Enable register bit for this channel
        (config.both == BothEdges::BOTH) ? portIBE[portNum] |= (1ul<<pinNum)
                                         : portIBE[portNum] &= ~(1ul<<pinNum);
        // Set Interrupt Event register bit for this channel
        (config.event == Event::RISING) ? portIEV[portNum] |= (1ul<<pinNum)
                                        : portIEV[portNum] &= ~(1ul<<pinNum);
        // Set Interrupt Clear register bit for this channel
        (config.clear == Clear::CLEAR) ? portICR[portNum] |= (1ul<<pinNum)
                                       : portICR[portNum] &= ~(1ul<<pinNum);
        // Set Interrupt Mask register bit for this channel
        (config.mask == Mask::ENABLE) ? portIM[portNum] |= (1ul<<pinNum)
                                      : portIM[portNum] &= ~(1ul<<pinNum);
    }
}

State Gpio::ReadChannel(Channel channel) {
    // Read the port associated with the desired pin
    State state = (State)portData[static_cast<uint8_t>(channel)/NUM_OF_CHANNELS_PER_PORT];
    State mask = (State)(1ul<<(static_cast<uint8_t>(channel)%NUM_OF_CHANNELS_PER_PORT));

    return (static_cast<uint8_t>(state) & static_cast<uint8_t>(mask)) ? State::HIGH : State::LOW;
}

void Gpio::WriteChannel(Channel channel, State state) {
    auto pin = static_cast<uint8_t>(channel);
    auto index = pin/NUM_OF_CHANNELS_PER_PORT;
    auto shiftVal = 1ul<<pin%NUM_OF_CHANNELS_PER_PORT;

    (state == State::HIGH) ? portData[index] |= (shiftVal)
                           : portData[index] &= ~(shiftVal);
}

void Gpio::ToggleChannel(Channel channel) {
    auto state = ReadChannel(channel);

    (state == State::HIGH) ? WriteChannel(channel, State::LOW)
                           : WriteChannel(channel, State::HIGH);
}

void Gpio::WriteToRegister() {

}
