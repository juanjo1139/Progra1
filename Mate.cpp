#include "Mate.h"
#include "Cubica.h"
using namespace std;

float unMedio=0.5;
float unTercio=0.3333333;

Mate::Mate(){}
Mate::~Mate(){}

float Mate::SolveLineal(float m, float b)
{    float x;
     x=-b/m;
     return x;}

float Mate::DiscrimCuad(float a, float b, float c)
{    float discrim;
     discrim=pow(b, 2)-4*a*c;
     return discrim;}

float Mate::Soluc1Cuad(float a, float b, float c)
{    float soluc;
     soluc=(-b+sqrt(this->DiscrimCuad(a, b, c)))/(2*a);
     return soluc;}

float Mate::Soluc2Cuad(float a, float b, float c)
{    float soluc;
     soluc=(-b-sqrt(this->DiscrimCuad(a, b, c)))/(2*a);
     return soluc;}

float Mate::Discrim1Cub(float a, float b, float c, float d)
{    float f=(((3*c/a)-(b*b/a*a))/3);
     return f;}

float Mate::Discrim2Cub(float a, float b, float c, float d)
{    float g=((2*pow(b, 3)/pow(a, 3))-(9*b*c/pow(a, 2))+(27*d/a)/27);
     return g;}

float Mate::SumaDeDiscrim(float a, float b, float c, float d)
{   float suma;
    suma=((pow(this->Discrim1Cub(a, b, c, d), 3))/27)+((pow(this->Discrim2Cub(a, b, c, d), 2))/4);
    return suma;}

float Mate::Soluc1Cub(float a, float b, float c, float d)
{   float i=(pow((((pow(this->Discrim2Cub(a, b, c, d), 2))/4)-this->SumaDeDiscrim(a, b, c, d)), unMedio));
   float j= pow(i, unTercio);
   float k= acos(-(this->Discrim2Cub(a, b, c, d)/(2*i)));
   return( (2*j)*cos(k/3)-(b/3*a));}

float Mate::Soluc2Cub(float a, float b, float c, float d)
{   float i=(pow((((pow(this->Discrim2Cub(a, b, c, d), 2))/4)-this->SumaDeDiscrim(a, b, c, d)), unMedio));
   float j= pow(i, unTercio);
   float l= j*-1;
   float k= acos(-(this->Discrim2Cub(a, b, c, d)/(2*i)));
   float m= cos(k/3);
   float n= ((sqrt(3))*sin(k/3));
   float p= ((b/3*a)*-1);
   return (l*(m+n)+p);}

float Mate::Soluc3Cub(float a, float b, float c, float d)
{   float i=(pow((((pow(this->Discrim2Cub(a, b, c, d), 2))/4)-this->SumaDeDiscrim(a, b, c, d)), unMedio));
   float j= pow(i, unTercio);
   float l= j*-1;
   float k= acos(-(this->Discrim2Cub(a, b, c, d)/(2*i)));
   float m= cos(k/3);
   float n= ((sqrt(3))*sin(k/3));
   float p= ((b/3*a)*-1);
   return (l*(m-n)+p);}

float Mate::TresSolIgu(float a, float b, float c, float d)
{    return (pow((d/a), unTercio)*-1);}

float Mate::UnaReal(float a, float b, float c, float d)
{   float r=((-(this->Discrim2Cub(a, b, c, d)/2))+(pow(this->SumaDeDiscrim(a, b, c, d), unMedio)));
   float s= pow(r, unTercio);
   float t= ((-(this->Discrim2Cub(a, b, c, d)/2))-(pow(this->SumaDeDiscrim(a, b, c, d), unMedio)));
   float u= pow(t, unTercio);
   return((s+u)-(b/(3*a)));}
