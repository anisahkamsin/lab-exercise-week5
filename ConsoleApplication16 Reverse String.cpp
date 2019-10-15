// ConsoleApplication16.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Reverse String Exercise

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int n, c = 0;
	char ch[30];

	cout << "Please enter any string = ";
	cin >> ch;

	for (n = 0; ch[n] != '\0'; n++)
	{
		c++;
	}

	cout << "For reverse string = ";

	for (n = c - 1; n >= 0; n--)
	{
		cout << ch[n];
	}
}