// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include "pch.h"
#include <iostream>
//#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	float a, b, c, rad, real_mean, pro = 1, d, x1, x2;
	int opt, opt1, opt2, opt3, opti, opt21, x, y, i, e, rem;
	float mean[100];
	float sum = 0;
	long long fact = 1, tab = 1;
	char choice;
	do
	{
		cout << " ***************MADE BY MOHD SAIF SIDDIQUE****************** \n";
		cout << "\n*****************PROGRAM OF CALCULATOR********************";
		cout << "\n\n*************************MAIN MENU*********************\n\n";
		cout << "\n\nEnter 1 for CALCULATOR \n\nEnter 2 for MATH FUNCTION \n\nEnter 3 For The Mathematical Equation \n\nEnter 4 For the Areas and volume \n\n";
		cout << "\nEnter your choice : ";
		cin >> opti;
		switch (opti)
		{
		case 1:
			do {
				cout << "\n\n**************************MENU******************************\n\n";
				cout << "\n Enter 1 for the Addition \n Enter 2 for Division \n Enter 3 for the Product \n Enter 4 for Subtraction ";
				cout << "\n Enter 5 for the power function ";
				cout << "\n\n\n\nEnter your choice : ";
				cin >> opt;
				switch (opt)
				{
				case 1:
					cout << "\nHow many numbers do you wan to enter? \n";
					cin >> e;
					for (i = 1; i <= e; i++)
					{
						cout << "\nEnter number" << i << "-	";
						cin >> mean[i];
						sum += mean[i];
					}
					cout << "\nSum = " << sum;
					break;
				case 2:
					cout << "\nEnter the value of a (numerical) \n ";
					cin >> a;
					cout << "\nEnter the value of b (numerical) \n ";
					cin >> b;
					cout << "\n Enter 1 for " << a << "/" << b << ", or " << "Enter 2 for " << b << "/" << a << " \n\n";
					cout << "\nEnter your choice : ";
					cin >> opt1;
					switch (opt1)
					{
					case 1:
						c = a / b;
						cout << "\nThe Division of " << a << "/" << b << " = " << c;
						break;
					case 2:
						c = b / a;
						cout << "\nThe Division of " << b << "/" << a << " = " << c;
						break;
					default:
						cout << "\nINVALID INPUT! ";
					}
					break;
				case 3:
					cout << "\nHow many numbers do you wan to enter? \n";
					cin >> e;
					for (i = 1; i <= e; i++)
					{
						cout << "\nEnter number" << i << "-	";
						cin >> mean[i];
						pro = pro * mean[i];
					}
					cout << "\n Product = " << pro;
					break;
				case 4:
					cout << "\nEnter the value of a (numerical) \n ";
					cin >> a;
					cout << "\nEnter the value of b (numerical) \n ";
					cin >> b;
					cout << "\n Enter 1 for " << a << " - " << b << ", or " << "Enter 2 for " << b << " - " << a << " \n\n";
					cout << "\nEnter your choice : ";
					cin >> opt2;
					switch (opt2)
					{
					case 1:
						c = a - b;
						cout << "\nThe Subtraction of " << a << " - " << b << " = " << c;
						break;
					case 2:
						c = b - a;
						cout << "\nThe Subtraction of " << b << " - " << a << " = " << c;
						break;
					default:
						cout << "\nINVALID INPUT! ";
					}
					break;
				case 5:
					cout << "\nEnter the value of a (numerical) \n ";
					cin >> a;
					cout << "\nEnter the value of b (numerical) \n ";
					cin >> b;
					cout << "\nEnter 1 for the value of " << a << " as a base, and " << b << " as a power \n";
					cout << "\nEnter 2 for the value of " << b << " as a base, and " << a << " as a power \n";
					cout << "\n\nEnter your choice : ";
					cin >> opt3;
					switch (opt3)
					{
					case 1:
						c = pow(a, b);
						cout << "\nThe value of " << a << " as a base, and " << b << " as a power is " << c;
						break;
					case 2:
						c = pow(b, a);
						cout << "\nThe value of " << b << " as a base, and " << a << " as a power is " << c;
						break;
					default:
						cout << "\nINVALID INPUT! ";
					}
					break;
				default:
					cout << "\nINVALID INPUT! ";
				}
				cout << "\n Enter y to play again ";
				cin >> choice;
			} while (choice == 'y');
			break;
			//***************************************************PART 2 FOR THE PROGRAM********************************************************************************
			//#########################################################################################################################################################
		case 2:
			do {
				cout << "\n\n**************************MENU******************************\n\n";
				cout << "\n Enter 1 for the Trigonometry ratio \n Enter 2 for Squre root \n Enter 3 for the Factorial of a number \n Enter 4 for the Table of a no. ";
				cout << "\n Enter 5 for the To Calculate Remainder \n Enter 6 for The mean value of the numbers ";
				cout << "\n\n\nEnter your choice : ";
				cin >> opt;
				switch (opt)
				{
				case 1:
					cout << "\nEnter the value of x (value of angle theeta as numerical) \n ";
					cin >> a;
					cout << "\nEnter 1 for the value of sin(" << a << ") \nEnter 2 for the value of cos(" << a << ") \nEnter 3 for the value of tan(" << a << ") \nEnter 4 for the value of cosec(" << a << ") \nEnter 5 for the value of sec(" << a << ") \nEnter 6 for the value of cot(" << a << ") ";
					cout << "\n\n\nEnter your choice : ";
					cin >> opt21;
					switch (opt21)
					{
					case 1:
						rad = a * (22 / 7) / 180;
						c = sin(rad);
						cout << "\nThe value of sin(" << a << ") = " << c;
						break;
					case 2:
						rad = a * (22 / 7) / 180;
						c = cos(rad);
						cout << "\nThe value of cos(" << a << ") = " << c;
						break;
					case 3:
						rad = a * (22 / 7) / 180;
						c = tan(rad);
						cout << "\nThe value of tan(" << a << ") = " << c;
						break;
					case 4:
						rad = a * (22 / 7) / 180;
						c = 1 / sin(rad);
						cout << "\nThe value of cosec(" << a << ") = " << c;
						break;
					case 5:
						rad = a * (22 / 7) / 180;
						c = 1 / cos(rad);
						cout << "\nThe value of sec(" << a << ") = " << c;
						break;
					case 6:
						rad = a * (22 / 7) / 180;
						c = 1 / tan(rad);
						cout << "\nThe value of cot(" << a << ") = " << c;
						break;
					default:
						cout << "\nINVALID INPUT! ";
					}
					break;
				case 2:
					cout << "\nEnter the value (numerical) \n ";
					cin >> a;
					c = sqrt(a);
					cout << "\nThe Squre Root of " << a << " = " << c << "\n";
					break;
				case 3:
					cout << "\nEnter the positive integer \n ";
					cin >> e;
					for (i = 1; i <= e; i++)
					{
						fact = fact * i;
					}
					cout << "\nFactorial  of " << e << " = " << fact << "		or		" << e << "! = " << fact;
					break;
				case 4:
					cout << "\nEnter the postive integer \n ";
					cin >> e;
					cout << "\nTable of " << e << " is \n\n ";
					for (i = 1; i <= 10; i++)
					{
						tab = e * i;
						cout << "\n" << tab;
					}
					break;
				case 5:
					cout << "\nEnter the value of devidend ";
					cin >> x;
					cout << "\nEnter the value of divisor ";
					cin >> y;
					rem = x % y;
					cout << "\nRemainder = " << rem;
					break;
				case 6:
					cout << "\nHow many numbers do you want to enter? \n ";
					cin >> e;
					for (i = 1; i <= e; i++)
					{
						cout << "\nEnter number" << i << "-	";
						cin >> mean[i];
						sum += mean[i];
					}
					real_mean = sum / e;
					cout << "\nArithmatic mean value is " << real_mean;
					break;
				default:
					cout << "\nINVALID INPUT! ";
				}
				cout << "\n Enter y to play again : ";
				cin >> choice;
			} while (choice == 'y');
			break;



			//*************************************************PART 3 FOR THE PROGRAM**************************************************************************
			//#################################################################################################################################################
		case 3:
			do {
				cout << "\n\n**************************MENU******************************\n\n";
				cout << "\nEnter 1 for the Quadratic Equation \n";
				cout << "\n\nEnter your choice : ";
				cin >> opt;
				switch (opt)
				{
				case 1:
					cout << "\nEnter the value of a (numerical) : \n ";
					cin >> a;
					cout << "\nEnter the value of b (numerical) : \n ";
					cin >> b;
					cout << "\nEnter the value of c (numerical) : \n ";
					cin >> c;
					d = (pow(b, 2) - (4 * a*c));
					if (d == 0)
					{
						cout << "\nTwo Equal roots ";
						x1 = ((-b) + (sqrt(d))) / 2 * a;
						x2 = ((-b) - (sqrt(d))) / 2 * a;
						cout << "\n\nThe roots are : " << x1 << " or " << x2;
					}
					else if (d < 0)
					{
						cout << "\nImaginary roots ";
						x1 = ((-b) + (sqrt(d))) / 2 * a;
						x2 = ((-b) - (sqrt(d))) / 2 * a;
						cout << "\n\nThe roots are : " << x1 << " or " << x2;
					}
					else if (d > 0)
					{
						cout << "\nTwo Real and different roots ";
						x1 = ((-b) + (sqrt(d))) / 2 * a;
						x2 = ((-b) - (sqrt(d))) / 2 * a;
						cout << "\n\nThe roots are : " << x1 << " or " << x2;
					}
					else
					{
						cout << "\nINVLID INPUT! ";
					}
					break;
				default:
					cout << "\nINVALID INPUT! ";
				}
				cout << "\n Enter y to play again : ";
				cin >> choice;
			} while (choice == 'y');
			break;

			//*************************************************PART 4 OF THE PROGRAM***************************************************************************
			//#################################################################################################################################################	
		case 4:
			do {
				cout << "\n\n**************************MENU******************************\n\n";
				cout << "\n Enter 1 for the shape Circle \n Enter 2 for the shape Triangle \n Enter 3 for the shape Rectangle \n Enter 4 for the shape Square ";
				cout << "\n Enter 5 for the shape Sphere \n Enter 6 for the shape Hemi-Sphere \n Enter 7 for the shape Cyllinder \n Enter 8 for the shape Cube ";
				cout << "\n Enter 9 for the shape Cuboid \n Enter 10 for the shape Cone \n Enter 11 for the shape Frustum ";
				cout << "\n\n\n\nEnter your choice : ";
				cin >> opt;
				switch (opt)
				{
				case 1:
					cout << "\nHow many numbers do you wan to enter? \n";
					cin >> e;
					for (i = 1; i <= e; i++)
					{
						cout << "\nEnter number" << i << "-	";
						cin >> mean[i];
						sum += mean[i];
					}
					cout << "\nSum = " << sum;
					break;
				case 2:
					cout << "\nEnter the value of a (numerical) \n ";
					cin >> a;
					cout << "\nEnter the value of b (numerical) \n ";
					cin >> b;
					cout << "\n Enter 1 for " << a << "/" << b << ", or " << "Enter 2 for " << b << "/" << a << " \n\n";
					cout << "\nEnter your choice : ";
					cin >> opt1;
					switch (opt1)
					{
					case 1:
						c = a / b;
						cout << "\nThe Division of " << a << "/" << b << " = " << c;
						break;
					case 2:
						c = b / a;
						cout << "\nThe Division of " << b << "/" << a << " = " << c;
						break;
					default:
						cout << "\nINVALID INPUT! ";
					}
					break;
				case 3:
					cout << "\nHow many numbers do you wan to enter? \n";
					cin >> e;
					for (i = 1; i <= e; i++)
					{
						cout << "\nEnter number" << i << "-	";
						cin >> mean[i];
						pro = pro * mean[i];
					}
					cout << "\n Product = " << pro;
					break;
				case 4:
					cout << "\nEnter the value of a (numerical) \n ";
					cin >> a;
					cout << "\nEnter the value of b (numerical) \n ";
					cin >> b;
					cout << "\n Enter 1 for " << a << " - " << b << ", or " << "Enter 2 for " << b << " - " << a << " \n\n";
					cout << "\nEnter your choice : ";
					cin >> opt2;
					switch (opt2)
					{
					case 1:
						c = a - b;
						cout << "\nThe Subtraction of " << a << " - " << b << " = " << c;
						break;
					case 2:
						c = b - a;
						cout << "\nThe Subtraction of " << b << " - " << a << " = " << c;
						break;
					default:
						cout << "\nINVALID INPUT! ";
					}
					break;
				case 5:
					cout << "\nEnter the value of a (numerical) \n ";
					cin >> a;
					cout << "\nEnter the value of b (numerical) \n ";
					cin >> b;
					cout << "\nEnter 1 for the value of " << a << " as a base, and " << b << " as a power \n";
					cout << "\nEnter 2 for the value of " << b << " as a base, and " << a << " as a power \n";
					cout << "\n\nEnter your choice : ";
					cin >> opt3;
					switch (opt3)
					{
					case 1:
						c = pow(a, b);
						cout << "\nThe value of " << a << " as a base, and " << b << " as a power is " << c;
						break;
					case 2:
						c = pow(b, a);
						cout << "\nThe value of " << b << " as a base, and " << a << " as a power is " << c;
						break;
					default:
						cout << "\nINVALID INPUT! ";
					}
					break;
				default:
					cout << "\nINVALID INPUT! ";
				}
				cout << "\n Enter y to play again ";
				cin >> choice;
			} while (choice == 'y');
			break;
		default:
			cout << "\nINVALID INPUT!  ";
		}
		cout << "\n Enter y For The MAIN MENU : ";
		cin >> choice;
	} while (choice == 'y');
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
