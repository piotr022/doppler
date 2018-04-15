#include "wave.h"



wave::wave(float F, float S, float G, double T)
:freq(F), Wspeed(S), gain(G), time(T){}

wave::~wave()
{
    //ctor
}

float wave::gFreq(float newFreq)        //seting and reading freq or only reading
{
    if(newFreq>0){
        this->freq = newFreq;
        return this->freq;
        }
    return this->freq;
}

                    // first is OBSERVED FREQUENCY, second in SOURCE FREQUENCY
Doppler::Doppler(wave &first, wave &second)     //geting addreses of waves classes
:pA(&first), pB(&second)            //to make dynamic operations and avoid doubling variables and classes, we point our pointer pA,pB to wave classes
{
    if(pA->Wspeed != pB->Wspeed)
        this->correct = false;
    else
        this->correct = true;
}
float Doppler::speeD()
{
    return pA->Wspeed*(1-(pB->freq/pA->freq));      //we are friends so we can make fun
}
