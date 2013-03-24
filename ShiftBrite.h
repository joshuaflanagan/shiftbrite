#ifndef ShiftBrite_h
#define ShiftBrite_h

#include "Arduino.h"

class ShiftBrite
{
  public:
    ShiftBrite(int data, int clock, int latch, int enable);
    void changeColor(int red, int green, int blue);

  private:
    void _sendPacket(int command, int red, int green, int blue);
    void _latchDataInRegisters();

    int _latchPin;
 };

 #endif
