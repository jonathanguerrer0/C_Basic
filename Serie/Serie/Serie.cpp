// Serie.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <conio.h>


using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	int serie=1;
	int cont;
	bool sumar = true;
cout<< " Cuantos numeros de la serie quieres ver? ";
cin>>cont;

do{
	cout<< serie<< " " ;
    cont --;


if (sumar) serie +=4;
else serie -=2;

sumar = !sumar;

  } while (cont);

   cin.get();
	return 0;
	
}

