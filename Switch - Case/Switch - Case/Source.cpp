#include <iostream>

using namespace std;



int main ()
{
	
	char c;
	cout << "Escribe una Letra" << endl;
	cin >> c;

	switch(c)

	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		cout << "Es una Vocal \n" << endl;
	break;

	default:
				cout << "Es una Consonante \n" << endl;

	}


system("PAUSE");
return 0;


}
