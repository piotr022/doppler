#ifndef WAVE_H
#define WAVE_H


class wave
{
    public://freq   Wspeed gain time
        wave(float, float, float=0, double=0);
        virtual ~wave();

        float gFreq(float);
        float gSpeed(float);
        float gGain(float);
        double gTime(double);
    protected:
        float freq, gain, Wspeed;
        double time;
    private:
        friend class Doppler;
};

class Doppler
{
    public:
        Doppler(wave&,wave&); //we wants only adresses to be fast and dynamic
        ~Doppler(){}
        float speeD();
    private:
        wave *pA, *pB;
        bool correct;
};
#endif // WAVE_H
