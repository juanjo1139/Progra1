#include "Mate.h"
#ifndef LINEAL_H_INCLUDED
#define LINEAL_H_INCLUDED
#include "Ecuacion.h"
#include <string>
#include <sstream>

class Lineal : public Ecuacion
{   private:
            float m;
            float b;
    public:
           Lineal(float, float);
           ~Lineal();

           float getM();
           float getB();
           void setM(float);
           void setB(float);

           float ResolvLineal(Mate&);
};
#endif // LINEAL_H_INCLUDED
