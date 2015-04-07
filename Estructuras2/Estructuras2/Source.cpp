#include <iostream>
using namespace std;

int main()


{

struct Hogar
{

int numeroDireccion;
int numeroTel;

Hogar() 
{	numeroDireccion= 0; numeroTel=2;}

int verDir() 
{return numeroDireccion;}

int guardaDir(int a)
{numeroDireccion= a;}

}Fernandez,Gonzales,Perez;
	
Fernandez.numeroTel = 55354533;
Fernandez.numeroDireccion= 324;
Gonzales = Fernandez;

	cout << Gonzales.numeroTel <<endl;
	cout << Perez.numeroTel <<endl;
	Perez.guardaDir(156);
	cout << Perez.verDir() <<endl;
		





	cin.get();
	return 0;
}