#include "Interfaz.h"
#include "Mate.h"
#include "Lineal.h"
#include "Cuadratica.h"
#include "Cubica.h"
#include <sstream>
#include <iostream>
using namespace std;

Interfaz::Interfaz(){}

Interfaz::~Interfaz(){}

void Interfaz::menuPrinci()
{
	int opc;
    system("cls");
	cout<<"                    ECUACIONES                    "<<endl<<endl;
	cout<<"           Escoja alguno de los 3 tipos "<<endl;
	cout<<"              de ecuaciones que se le   "<<endl;
	cout<<"          presentan para que el sistema "<<endl;
	cout<<"                 lo pueda resolver      "<<endl<<endl<<endl;
	cout<<"           1- Ecuacion Lineal"<<endl<<endl;
	cout<<"           2- Ecuacion Cuadratica"<<endl<<endl;
	cout<<"           3- Ecuacion Cubica"<<endl<<endl;
	cout<<"           4- Salir"<<endl;
	cin>>opc;
	switch(opc)
	{
		case 1:
			this->menuLineal();
			this->menuPrinci();
			break;
		case 2:
			this->menuCuadratica();
			this->menuPrinci();
			break;
		case 3:
			this->menuCubica();
			this->menuPrinci();
			break;
		default:
			break;
	}//fin del switch
}//fin del metodo menuPrinci()

void Interfaz::menuLineal()
{
	float m, b;
	int opc;
	bool esEcuacion=false;//variable bandera para indicar si es ecuacion o no
	system("cls");
	cout<<"Ud ha escogido la Ecuacion Lineal"<<endl;
	cout<<"       Que tiene la forma        "<<endl;
	cout<<"            mx+b=0                "<<endl<<endl;
	do
	{
		cout<<"Digite el valor de m"<<endl;
		cin>>m;
		if(m!=0)
		{
		    esEcuacion=true;
        }
        else
        {
            (esEcuacion=false);
			cout<<"El valor digitado no es valido \a"<<endl;
        }
	}//fin del do while
	while(esEcuacion==false);
	cout<<"Digite el valor de b"<<endl;
	cin>>b;
	Mate obj;
	Lineal ecuLineal(m, b);
	system("cls");
	cout<<"Presione la opcion de lo que desea realizar"<<endl<<endl<<endl;
	cout<<"1-Mostrar Solucion"<<endl;
	cout<<"2-Volver a menu anterior"<<endl;
	cin>>opc;
	switch(opc)
	{
		case 1:
			cout<<"La solucion de esta Ecuacion es: "<<ecuLineal.ResolvLineal(obj)<<endl<<endl;
			system("pause");
			break;
		default:
			menuPrinci();
			break;
	}
}
void Interfaz::menuCuadratica()
{
	float a, b, c;
	int opc;
	bool esEcuacion=false;//variable bandera para indicar si es ecuacion o no
	system("cls");
	cout<<"Ud ha escogido la Ecuacion Cuadratica"<<endl;
	cout<<"         Que tiene la forma          "<<endl;
	cout<<"             ax²+bx+c=0              "<<endl<<endl<<endl;
	do
	{
		cout<<"Digite el valor de a"<<endl;
		cin>>a;
		if(a!=0)
		{
			esEcuacion=true;
		}
		else
		{
			(esEcuacion=false);
			cout<<"El valor digitado no es valido \a"<<endl;
		}
	}//fin del do while
	while(esEcuacion==false);
	cout<<"Digite el valor de b"<<endl;
	cin>>b;
	cout<<"Digite el valor de c"<<endl;
	cin>>c;
	Cuadratica ecuCuadr(a, b, c);
	Mate obj2;
	system("cls");
	cout<<"Presione la opcion de lo que desea realizar"<<endl<<endl<<endl;
	cout<<"1-Imprimir una solucion"<<endl;
	cout<<"2-Imprimir dos soluciones"<<endl;
	cout<<"3-Conocer su discriminante"<<endl;
	cout<<"4-Salir"<<endl;
	cin>>opc;
	switch(opc)
	{
		case 1:
			if(ecuCuadr.DiscrimCuad(obj2)<0)
			{
                cout<<"La ecuacion no tiene soluciones reales "<<endl<<endl;
            }
            else
            {
                cout<<"La solucion de esta ecuacion es: "<<ecuCuadr.Soluc1Cuad(obj2)<<endl<<endl;
            }
			system("pause");
			break;
		case 2:
			if(ecuCuadr.DiscrimCuad(obj2)<0)
			{
				cout<<"La ecuacion no tiene soluciones reales "<<endl<<endl;
			}
			else
			{
                if(ecuCuadr.DiscrimCuad(obj2)==0)
                {
                    cout<<"La Ecuacion solo tiene una solucion real"<<endl;
                    cout<<"La solucion es: "<<ecuCuadr.Soluc1Cuad(obj2)<<endl;
                }
                else
                {
                    cout<<"La primera solucion de esta ecuacion es: "<<ecuCuadr.Soluc1Cuad(obj2)<<endl;
                    cout<<"La segunda solucion de esta ecuacion es: "<<ecuCuadr.Soluc2Cuad(obj2)<<endl;
                }
			}//fin del else
			system("pause");
			break;
		case 3:
			cout<<"El discriminante de esta ecuacion es: "<<ecuCuadr.DiscrimCuad(obj2)<<endl;
			system("pause");
			break;
		default:
			menuPrinci();
			break;
    }//fin del switch
}//fin del metodo menuCuadratica

void Interfaz::menuCubica()
{
	float a, b, c, d;
	int opc;
	bool esEcuacion=false;//variable bandera para indicar si es ecuacion o no
	system("cls");
	cout<<"Ud ha escogido la Ecuacion Cubica"<<endl;
	cout<<"         Que tiene la forma          "<<endl;
	cout<<"           ax³+bx²+cx+d=0            "<<endl<<endl<<endl;
	do
	{
		cout<<"Digite el valor de a"<<endl;
		cin>>a;
		if(a!=0)
		{
			esEcuacion=true;
		}
		else
		{
			(esEcuacion=false);
			cout<<"El valor digitado no es valido \a" << endl;
		}
	}//fin del do while
	while(esEcuacion==false);
	cout<<"Digite el valor de b"<<endl;
	cin>>b;
	cout<<"Digite el valor de c"<<endl;
	cin>>c;
	cout<<"Digite el valor de d"<<endl;
	cin>>d;
	Cubica ecuCubic(a, b, c, d);
	Mate obj3;
	system("cls");
	cout<<"Presione la opcion de lo que desea realizar"<<endl<<endl<<endl;
	cout<<"1-Imprimir una solucion"<<endl;
	cout<<"2-Imprimir dos soluciones"<<endl;
	cout<<"3-Imprimir tres soluciones"<<endl;
	cout<<"4-Salir"<<endl;
	cin>>opc;
	system("cls");
	switch(opc)
	{
		case 1:
           if(ecuCubic.SumaDeDiscrim(obj3)>0)
           {
               cout<<"La ecuacion solo tiene una solucion real"<<endl;
               cout<<"La solucion es: "<<ecuCubic.UnaReal(obj3)<<endl;
           }
           else
           {
				if(ecuCubic.SumaDeDiscrim(obj3)<0)
				{
				    cout<<"La ecuacion tiene tres soluciones reales"<<endl;
                    cout<<"La primera solucion es: "<<ecuCubic.Soluc1Cub(obj3)<<endl;
                }
                else
                {
                    cout<<"Las tres soluciones son reales e iguales "<<endl;
                    cout<<"La solucion es: "<<ecuCubic.TresSolIgu(obj3)<<endl;
                }
           }//fin del else
           break;
		case 2:
			if(ecuCubic.SumaDeDiscrim(obj3)>0)
			{
				cout<<"La ecuacion solo tiene una solucion real"<<endl;
				cout<<"La solucion es: "<<ecuCubic.UnaReal(obj3)<<endl;
            }
            else
            {
				if(ecuCubic.SumaDeDiscrim(obj3)<0)
				{
                    cout<<"La ecuacion tiene tres soluciones reales"<<endl;
                    cout<<"La primera solucion es: "<<ecuCubic.Soluc1Cub(obj3)<<endl;
                    cout<<"La segunda solucion es: "<<ecuCubic.Soluc2Cub(obj3)<<endl;
                }
                else
                {
                    cout<<"Las tres soluciones son reales e iguales "<<endl;
                    cout<<"La solucion es: "<<ecuCubic.TresSolIgu(obj3)<<endl;
				}
			}//fin del else
			system("pause");
			break;
		case 3:
			if(ecuCubic.SumaDeDiscrim(obj3)>0)
			{
				cout<<"La ecuacion solo tiene una solucion real"<<endl;
				cout<<"La solucion es: "<<ecuCubic.UnaReal(obj3)<<endl;
			}
			else
			{
				if(ecuCubic.SumaDeDiscrim(obj3)<0)
				{
                    cout<<"La ecuacion tiene tres soluciones reales"<<endl;
                    cout<<"La primera solucion es: "<<ecuCubic.Soluc1Cub(obj3)<<endl;
                    cout<<"La segunda solucion es: "<<ecuCubic.Soluc2Cub(obj3)<<endl;
                    cout<<"La tercera solucion es: "<<ecuCubic.Soluc3Cub(obj3)<<endl;
                }
                else
                {
                    cout<<"Las tres soluciones son reales e iguales "<<endl;
                    cout<<"La solucion es: "<<ecuCubic.TresSolIgu(obj3)<<endl;
				}
			}//fin del else
			system("pause");
			break;
		default:
			menuPrinci();
			break;
	}//fin del switch
}//fin del metodo menuCubica
