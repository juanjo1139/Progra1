#ifndef MATE1_H_INCLUDED
#define MATE1_H_INCLUDED
#include <cmath>
#include <math.h>
using namespace std;

class Mate
{    public:
            Mate();
            ~Mate();
            float SolveLineal(float, float);
            float DiscrimCuad(float, float,float);
            float Soluc1Cuad(float, float, float);
            float Soluc2Cuad(float, float, float);
            float Discrim1Cub(float, float, float, float);
            float Discrim2Cub(float, float, float, float);
            float SumaDeDiscrim(float, float, float, float);
            float Soluc1Cub(float, float, float, float);
            float Soluc2Cub(float, float, float, float);
            float Soluc3Cub(float, float, float, float);
            float TresSolIgu(float, float, float, float);
            float UnaReal(float, float, float, float);
};
#endif // MATE1_H_INCLUDED
