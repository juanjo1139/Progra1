#include "Lineal.h"
using namespace std;

Lineal::Lineal(float m, float b)
    {    this->m=m;
         this->b=b;}

Lineal::~Lineal(){}

float Lineal::getM(){return m;}
float Lineal::getB(){return b;}
void Lineal::setM(float m){this->m=m;}
void Lineal::setB(float b){this->b=b;}

float Lineal::ResolvLineal(Mate& objLineal)
{    return objLineal.SolveLineal(m, b);}
