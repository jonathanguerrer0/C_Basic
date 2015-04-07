#include <iostream>
int suma;
int num1= 2;
int num2 = 4;

using namespace std;

void funcion ()
{
cout << "Funcion sin valor de retorno"<< endl;
}

int sumar(int a, int b)
{
	return(a) + (b);
}

int main ()

{
suma = sumar(num1,num2);
cout << suma << endl;
funcion();
cin.get();
return 0;
}