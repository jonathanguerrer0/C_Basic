#include <iostream>

using namespace std;
bool comprobador;

int num,num2,num3,num4;




int main ()
{
num=12;
num2=20;
num3=4;
num4=13;



	comprobador =(num4 > num || num3 > num2 );
cout << comprobador << endl;

cin.get();
return 0;


}