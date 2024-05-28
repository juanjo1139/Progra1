#include "Cubica.h"
#include <math.h>
using namespace std;

Cubica::Cubica(float w, float x, float y, float z)
{    a=w;
     b=x;
     c=y;
     d=z;}

Cubica::~Cubica(){}

float Cubica::getA(){return a;}
float Cubica::getB(){return b;}
float Cubica::getC(){return c;}
float Cubica::getD(){return d;}
void Cubica::setA(float a){this->a=a;}
void Cubica::setB(float b){this->b=b;}
void Cubica::setC(float c){this->c=c;}
void Cubica::setD(float d){this->d=d;}

float Cubica::Discrim1Cub(Mate& objCubic)
{    return objCubic.Discrim1Cub(a, b, c, d);}

float Cubica::Discrim2Cub(Mate& objCubic)
{    return objCubic.Discrim2Cub(a, b, c, d);}

float Cubica::SumaDeDiscrim(Mate& objCubic)
{    return objCubic.SumaDeDiscrim(a, b, c, d);}

float Cubica::Soluc1Cub(Mate& objCubic)
{    return objCubic.Soluc1Cub(a, b, c, d);}

float Cubica::Soluc2Cub(Mate& objCubic)
{    return objCubic.Soluc2Cub(a, b, c, d);}

float Cubica::Soluc3Cub(Mate& objCubic)
{    return objCubic.Soluc3Cub(a, b, c, d);}

float Cubica::TresSolIgu(Mate& objCubic)
{    return objCubic.TresSolIgu(a, b, c, d);}

float Cubica::UnaReal(Mate& objCubic)
{   return objCubic.UnaReal(a, b, c, d);}
