// ConsoleApplicationTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int int1, int2;
	float float1, float2;
	char choice;
	cout << "\t\t\tC++ Program to accept two number and print the sum of entered number \n\n";
	cout << "Enter \'a\' for sum of two numbers in integer form. \nEnter \'b\' for the sum of two number in decimal form. ";
	cout << "\n\nEnter your choice: ";
	cin >> choice;
	if (choice == 'a')
	{
		cout << "\nEnter the first integer: ";
		cin >> int1;
		cout << "\nEnter the second integer: ";
		cin >> int2;
		cout << "\nThe sum of " << int1 << " and " << int2 << " is: " << int1 + int2;
	}
	if (choice == 'b')
	{
		cout << "\nEnter the first decimal number: ";
		cin >> float1;
		cout << "\nEnter the second decimal number: ";
		cin >> float2;
		cout << "\nThe sum of " << float1 << " and " << float2 << " is: " << float1 + float2;
	}
	else
	{
		cout << "\nInvalid input!";
	}
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file