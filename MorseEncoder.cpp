#include "MorseEncoder.h"

MorseEncoder::MorseEncoder() : ledPin(13)
{
}

void MorseEncoder::initialize(int ledPin)
{
  this->ledPin = ledPin;
}

void MorseEncoder::dot()
{
  digitalWrite(this->ledPin, HIGH); // sets the LED on
  delay(1000);                      // waits for a second
  digitalWrite(this->ledPin, LOW);  // sets the LED off
  delay(1000);
}

void MorseEncoder::dash()
{
  digitalWrite(this->ledPin, HIGH); // sets the LED on
  delay(3000);                      // waits for three seconds
  digitalWrite(this->ledPin, LOW);  // sets the LED off
  delay(1000);
}

void MorseEncoder::a()
{
  dot();
  dash();
}

void MorseEncoder::b()
{
  dash();
  dot();
  dot();
  dot();
}

void MorseEncoder::c()
{
  dash();
  dot();
  dash();
  dot();
}

void MorseEncoder::d()
{
  dash();
  dot();
  dot();
}

void MorseEncoder::e()
{
  dot();
}

void MorseEncoder::f()
{
  dot();
  dot();
  dash();
  dot();
}

void MorseEncoder::g()
{
  dash();
  dash();
  dot();
}

void MorseEncoder::h()
{
  dot();
  dot();
  dot();
  dot();
}

void MorseEncoder::i()
{
  dot();
  dot();
}

void MorseEncoder::j()
{
  dot();
  dash();
  dash();
  dash();
}

void MorseEncoder::k()
{
  dash();
  dot();
  dash();
}

void MorseEncoder::l()
{
  dot();
  dash();
  dot();
  dot();
}

void MorseEncoder::m()
{
  dash();
  dash();
}

void MorseEncoder::n()
{
  dash();
  dot();
}

void MorseEncoder::o()
{
  dash();
  dash();
  dash();
}

void MorseEncoder::p()
{
  dot();
  dash();
  dash();
  dot();
}

void MorseEncoder::q()
{
  dash();
  dash();
  dot();
  dash();
}

void MorseEncoder::r()
{
  dot();
  dash();
  dot();
}

void MorseEncoder::s()
{
  dot();
  dot();
  dot();
}

void MorseEncoder::t()
{
  dash();
}

void MorseEncoder::u()
{
  dot();
  dot();
  dash();
}

void MorseEncoder::v()
{
  dot();
  dot();
  dot();
  dash();
}

void MorseEncoder::w()
{
  dot();
  dash();
  dash();
}

void MorseEncoder::x()
{
  dash();
  dot();
  dot();
  dash();
}

void MorseEncoder::y()
{
  dash();
  dot();
  dash();
  dash();
}

void MorseEncoder::z()
{
  dash();
  dash();
  dot();
  dot();
}

void MorseEncoder::zero()
{
  dash();
  dash();
  dash();
  dash();
  dash();
}

void MorseEncoder::one()
{
  dot();
  dash();
  dash();
  dash();
  dash();
}

void MorseEncoder::two()
{
  dot();
  dot();
  dash();
  dash();
  dash();
}

void MorseEncoder::three()
{
  dot();
  dot();
  dot();
  dash();
  dash();
}

void MorseEncoder::four()
{
  dot();
  dot();
  dot();
  dot();
  dash();
}

void MorseEncoder::five()
{
  dot();
  dot();
  dot();
  dot();
  dot();
}

void MorseEncoder::six()
{
  dash();
  dot();
  dot();
  dot();
  dot();
}

void MorseEncoder::seven()
{
  dash();
  dash();
  dot();
  dot();
  dot();
}

void MorseEncoder::eight()
{
  dash();
  dash();
  dash();
  dot();
  dot();
}

void MorseEncoder::nine()
{
  dash();
  dash();
  dash();
  dash();
  dot();
}