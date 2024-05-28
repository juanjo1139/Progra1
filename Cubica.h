#ifndef CUBICA_H_INCLUDED
#define CUBICA_H_INCLUDED
#include "Ecuacion.h"
#include "Mate.h"
using namespace std;

class Cubica : public Ecuacion
{   private:
            float a;
            float b;
            float c;
            float d;
    public:
           Cubica(float, float, float, float);
           ~Cubica();

           float getA();
           float getB();
           float getC();
           float getD();
           void setA(float);
           void setB(float);
           void setC(float);
           void setD(float);

           float Discrim1Cub(Mate&);
           float Discrim2Cub(Mate&);
           float Soluc1Cub(Mate&);
           float Soluc2Cub(Mate&);
           float Soluc3Cub(Mate&);
           float SumaDeDiscrim(Mate&);
           float TresSolIgu(Mate&);
           float UnaReal(Mate &);
};
#endif // CUBICA_H_INCLUDED
