#include <iostream>
#include "wave.h"
using namespace std;

//this is only for demonstration how my class work!!

int main()
{
    wave *sound1;
    wave *sound2;

    Doppler *fromSound12;

    float freq;

    cout << "enter SOURCE frequency in Hz: ";
    cin >> freq;
    sound2=new wave(freq, 340.3); //340.3 is sound speed in air
    cout << "enter RECIEVED frequency in Hz: ";
    cin >> freq;
    sound1=new wave(freq, 340.3);  //dynamicly adding new wave

    fromSound12=new Doppler(*sound1, *sound2);

    cout << "speed of source equals: " << fromSound12->speeD() << " m/s\n";

    while(true) //hehe
    {               //and calculating non stop
        cout << "enter new RECIEVED frequency in Hz: ";
        cin >> freq;
        sound1->gFreq(freq);
        cout << "new speed of source equals: " << fromSound12->speeD() << " m/s\n";
    }
}
