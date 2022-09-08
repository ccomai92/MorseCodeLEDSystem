#include <Keyboard.h>
#include "MorseEncoder.h"

const int LED_PIN = 13;     
const char SEPARATOR = ' '; // separatotor to distinguish between words 
const int SENTINEL = 26;    // ctrl+z in ascii

bool exitCalled;            // exit flag 
MorseEncoder morseEncoder;  // morse encoder object

void setup()
{
    // put your setup code here, to run once:
    pinMode(LED_PIN, OUTPUT);           // sets the digital pin as output
    Serial.begin(9600);                 // open the serial port
    Keyboard.begin();                   // initialize control over the keyboard
    morseEncoder.initialize(LED_PIN);   // initialize morse encoder
    exitCalled = false;                 // initialize exit flag
}

void loop()
{
    if (exitCalled)
    {
        // Program routine after SENTINEL was received.
        if ( Serial.available() > 0)
        {
            String input = Serial.readString();
            Serial.println("Program does not respond");
        }
    }
    else
    {
        // receive available inputs through serial port
        if (Serial.available() > 0)
        {
            if (Serial.peek() == SENTINEL)
            {
                // exit normal routine
                Serial.println("Exit!");
                Serial.end();
                exitCalled = true;
            }
            else
            {
                // perform normal routine
                String input = Serial.readString();
                input.trim();
                Serial.print(char(SENTINEL));
                Serial.println(input);
                input.toLowerCase();

                EncodeInput(input);
            }
        }
    }
}

void EncodeInput(String input)
{
    for (int i = 0; i < input.length(); i++)
    {
        char currentChar = input[i];
        if (currentChar == SEPARATOR)
        {
            wordDelay();
        }
        else
        {
            encodeCharacter(currentChar);
            letterDelay();
        }
    }
}

void encodeCharacter(char inputChar)
{
    if (inputChar == 'a')
    {
        morseEncoder.a();
    }
    else if (inputChar == 'b')
    {
        morseEncoder.b();
    }
    else if (inputChar == 'c')
    {
        morseEncoder.c();
    }
    else if (inputChar == 'd')
    {
        morseEncoder.d();
    }
    else if (inputChar == 'e')
    {
        morseEncoder.e();
    }
    else if (inputChar == 'f')
    {
        morseEncoder.f();
    }
    else if (inputChar == 'g')
    {
        morseEncoder.g();
    }
    else if (inputChar == 'h')
    {
        morseEncoder.h();
    }
    else if (inputChar == 'i')
    {
        morseEncoder.i();
    }
    else if (inputChar == 'j')
    {
        morseEncoder.j();
    }
    else if (inputChar == 'k')
    {
        morseEncoder.k();
    }
    else if (inputChar == 'l')
    {
        morseEncoder.l();
    }
    else if (inputChar == 'm')
    {
        morseEncoder.m();
    }
    else if (inputChar == 'n')
    {
        morseEncoder.n();
    }
    else if (inputChar == 'o')
    {
        morseEncoder.o();
    }
    else if (inputChar == 'p')
    {
        morseEncoder.p();
    }
    else if (inputChar == 'q')
    {
        morseEncoder.q();
    }
    else if (inputChar == 'r')
    {
        morseEncoder.r();
    }
    else if (inputChar == 's')
    {
        morseEncoder.s();
    }
    else if (inputChar == 't')
    {
        morseEncoder.t();
    }
    else if (inputChar == 'u')
    {
        morseEncoder.u();
    }
    else if (inputChar == 'v')
    {
        morseEncoder.v();
    }
    else if (inputChar == 'w')
    {
        morseEncoder.w();
    }
    else if (inputChar == 'x')
    {
        morseEncoder.x();
    }
    else if (inputChar == 'y')
    {
        morseEncoder.y();
    }
    else if (inputChar == 'z')
    {
        morseEncoder.z();
    }
    else if (inputChar == '1')
    {
        morseEncoder.one();
    }
    else if (inputChar == '2')
    {
        morseEncoder.two();
    }
    else if (inputChar == '3')
    {
        morseEncoder.three();
    }
    else if (inputChar == '4')
    {
        morseEncoder.four();
    }
    else if (inputChar == '5')
    {
        morseEncoder.five();
    }
    else if (inputChar == '6')
    {
        morseEncoder.six();
    }
    else if (inputChar == '7')
    {
        morseEncoder.seven();
    }
    else if (inputChar == '8')
    {
        morseEncoder.eight();
    }
    else if (inputChar == '9')
    {
        morseEncoder.nine();
    }
    else
    {
        Serial.print("Unknown character: ");
        Serial.print(inputChar);
        Serial.print(": ");
        Serial.println(inputChar, HEX);
    }
}

void letterDelay()
{
    delay(3000);
}

void wordDelay()
{
    delay(7000);
}
