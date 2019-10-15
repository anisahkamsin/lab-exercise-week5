// ConsoleApplication10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	char select;

	cout << "Please enter a value\n";
	cin >> n;

	do
	{

		if (n % 2 == 0)
			cout << n << " is even number" << endl;

		else if (n % 2 != 0)
			cout << n << " is odd number" << endl;

		cout << "If you want to repeat the loop, please enter Y/y. If not otherelse." << endl;
		cin >> select;

	} while (select == 'Y' || select == 'y' );

	return 0;
}

