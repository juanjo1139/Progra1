#include "Cuadratica.h"
using namespace std;

Cuadratica::Cuadratica(float a, float b, float c)
{   this->a=a;
    this->b=b;
    this->c=c;}

Cuadratica::~Cuadratica(){}

float Cuadratica::getA(){return a;}
float Cuadratica::getB(){return b;}
float Cuadratica::getC(){return c;}
void Cuadratica::setA(float a){this->a=a;}
void Cuadratica::setB(float b){this->b=b;}
void Cuadratica::setC(float c){this->c=c;}

float Cuadratica::DiscrimCuad(Mate& objCuadra)
{    return objCuadra.DiscrimCuad(a, b, c);}

float Cuadratica::Soluc1Cuad(Mate& objCuadra)
{    return objCuadra.Soluc1Cuad(a, b, c);}

float Cuadratica::Soluc2Cuad(Mate& objCuadra)
{    return objCuadra.Soluc2Cuad(a, b, c);}
