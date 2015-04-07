#define sumar(a,b) a+b
#define multiplicar(a,b) a*b
#define dividir(a,b) a/b

#include <iostream>

int num1 = 2;
int num2 = 4;

int suma;
int mult;
int divi;
using namespace std;


int main()
{

	suma= sumar(num1,num2);
	mult=multiplicar(num1,num2);
	divi=dividir(num2,num1);

	cout <<"la suma es:  "<< suma<<endl;
	cout <<"la multiplicacion  es:  "<< mult<<endl;
	cout <<"la division es:  "<< divi<<endl;



	cin.get();
		return 0;
}