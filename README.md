# lab-exercise-week5

#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int type;
	int month,total;

	do
	{
		cout << setw(50) << "Please select your gym type. " << endl;
		cout << setw(40) << "1. Adult Gym.\n";
		cout << setw(39.5) << "2. Kids Gym.\n";
		cout << setw(49) << "3. Senior Citizen Gym.\n";
		cout << setw(44) << "4. Exit the menu.\n" << endl;
		cin >> type;

		

		switch (type)
		{

		case 1:
			cout << setw(48) << "how many month?\n";
			cin >> month;
			total = month * 50;
			cout << setw(48) << "Adult Gym : RM " << total << endl << endl;
			break;
		case 2:
			cout << setw(48) << "how many month?\n";
			cin >> month;
			total = month * 20;
			cout << setw(48) << "Kids Gym : RM " << total << endl << endl;
			break;
		case 3:
			cout << setw(51) << "Senior Citizen Gym. Price is FREE\n\n";
			break;
		case 4:
			cout << setw(48) << "Exit the menu.\n\n";
			break;

		default:cout << setw(51) << "Please enter the number between 1-3. " << endl;

		}
	} while (type != 4);

	cout << setw(50) << "TQ for using our Gym service.\n";
}
