#ifndef MORSE_H
#define MORSE_H

#include <Arduino.h>

class MorseEncoder
{
public:
    MorseEncoder();
    void initialize(int ledPin);
    void a();
    void b();
    void c();
    void d();
    void e();
    void f();
    void g();
    void h();
    void i();
    void j();
    void k();
    void l();
    void m();
    void n();
    void o();
    void p();
    void q();
    void r();
    void s();
    void t();
    void u();
    void v();
    void w();
    void x();
    void y();
    void z();
    void zero();
    void one();
    void two();
    void three();
    void four();
    void five();
    void six();
    void seven();
    void eight();
    void nine();

private:
    int ledPin;

    void dot();
    void dash();
};

#endif