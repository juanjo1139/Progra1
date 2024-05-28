#include "Mate.h"
#ifndef CUADRATICA_H_INCLUDED
#define CUADRATICA_H_INCLUDED
#include "Ecuacion.h"
using namespace std;

class Cuadratica : public Ecuacion
{   private:
            float a;
            float b;
            float c;
    public:
           Cuadratica(float, float, float);
           ~Cuadratica();

           float getA();
           float getB();
           float getC();
           void setA(float);
           void setB(float);
           void setC(float);

           float DiscrimCuad(Mate&);
           float Soluc1Cuad(Mate&);
           float Soluc2Cuad(Mate&);
};
#endif // CUADRATICA_H_INCLUDED
