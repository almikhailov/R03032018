// ConsoleApplication16.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int a, b, k;
	//a=10;
	a = rand() % 100;
	cout << a << endl;
	k = 0;
	cout << "guess a number from 1 to 100\n";
	while (k <= 6) {
		k++;

		cout << k << " - try. ";
		cout << "input nuber (B)\n";
		cin >> b;
		if (b == a)
		{
			cout << "YOU WIN!!!\n";
			k = 7;

		}
		//---------------------------
		if (b<a)
		{
			cout << "small number\n";
		}
		//---------------------------
		if (b>a)
		{
			cout << "big number\n";
		}
		//--------------------------    

	}
	if (k == 5) { cout << "YOU LOST!\n"; }

	system("pause");
	return 0;
}