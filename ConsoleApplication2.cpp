// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include <math.h> 
#include <stdio.h> 
#include "ConsoleApplication2.h"

using namespace std;
//Laboratory1

/*
* exp-10
double Convert(double degree)
{
	double pi = 3.14159265359;
	return (degree * (pi / 180));
}
*/
/*
* exp-11
double Convert(double radian) {
	double pi = 3.14159;
	return(radian * (180 / pi));
}
*/

/*
* exp-15
// function to find the 
// midpoint of a line 
void midpoint(int x1, int x2,
	int y1, int y2)
{
	cout << (float)(x1 + x2) / 2 <<
		" , " << (float)(y1 + y2) / 2;
}
*/
int main()
{
#pragma region 1



	//Ex. 1
	//Write a program to prompt user to input her/his name and print his name with Hello on the screen.
	//e.g.Hello Urszula!
	/*
	string _name;
	cout << "Please write yoru name=  ";
	cin >> _name;
	cout << "Hello " << _name << endl;
	*/

#pragma endregion
#pragma region 2
	//Ex. 2
	 //Write a program to simulate chatting with user.Invent your sentences.
		//e.g.
	/*
	string _name,_replay;
	cout << "Hello what is your name ";
	cin >> _name;
	cout << "Hello " << _name << "How are you?";
	cin >> _replay;

	cout << "I'm good :)";
	*/
#pragma endregion
#pragma region 3
	//Ex. 3
	//Write a C++ program to generate initials of your name
	/*
	int height = 5;
	int width = (2 * height) - 1;
	
	int n = width / 2, i, j;
	for (i = 0; i < height; i++) {
		for (j = 0; j <= width; j++) {
			if (j == n || j == (width - n)
				|| (i == height / 2 && j > n
					&& j < (width - n)))
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
		n--;
	
	}
	*/
#pragma endregion
#pragma region 4
	//Ex. 4
	//Write a C++ program that reads from user two numbersand calculatesand prints results from various operations.Use all arithmetic operators.
		//Hint.In some operations we get floating point variable therefore we must cast integer values to the same floating point type as result variable.
	/*
	char op;
	float num1, num2;

	cout << "Enter operator either + or - or * or /: ";
	cin >> op;

	cout << "Enter two operands: ";
	cin >> num1 >> num2;

	switch (op)
	{
	case '+':
		cout << num1 + num2;
		break;

	case '-':
		cout << num1 - num2;
		break;

	case '*':
		cout << num1 * num2;
		break;

	case '/':
		cout << num1 / num2;
		break;

	default:
		// If the operator is other than +, -, * or /, error message is shown
		cout << "Error! operator is not correct";
		break;
	}

	return 0;
	*/

#pragma endregion
#pragma region 5
	//Ex. 5
	//Write a C++ program that reads from user 3 integer values and print these values in forward and reversed order.
	/*
		int n, reversedNumber = 0, remainder;

		cout << "Enter an integer: ";
		cin >> n;

		while (n != 0) {
			remainder = n % 10;
			reversedNumber = reversedNumber * 10 + remainder;
			n /= 10;
		}

		cout << "Reversed Number = " << reversedNumber;

		return 0;
		*/
#pragma endregion
#pragma region 6
  //Ex. 6
  //Write a program to prompt user to input a letterand print these letter on the screen with sentence 
/*
char a;
cout << "Write a word= ";
cin >> a;
cout << "You wrote a letter " << a;
*/
#pragma endregion
#pragma region 7
//Ex.7
//Write a program to prompt user to input temperature in Celcius scale and calculate it to Farenheit scale.
/*
float frh, cel;
cout << "\n\n Convert temperature in Celsius to Fahrenheit :\n";
cout << "---------------------------------------------------\n";
cout << " Input the temperature in Celsius : ";
cin >> cel;
frh = (cel * 9.0) / 5.0 + 32;
cout << " The temperature in Celsius    : " << cel << endl;
cout << " The temperature in Fahrenheit : " << frh << endl;
cout << endl;
return 0;
*/
#pragma endregion
#pragma region 8
//Ex.8
//Write a program to prompt user to input temperature in Farenheit scaleand calculate it to Farenheit scale Celcius scale.
/*
float fahrenheit, celsius;

cout << "Enter the temperature in Celsius : ";
cin >> celsius;
fahrenheit = (celsius * 9.0) / 5.0 + 32;
cout << "The temperature in Celsius    : " << celsius << endl;
cout << "The temperature in Fahrenheit : " << fahrenheit << endl;
return 0;
*/
#pragma endregion
#pragma region 9
//Ex.9
//Write a program that reads from user three numbersand calculates mean.
/*
int n;
cout << "Enter the number of values in the data set:\n";
cout << ": ";
cin >> n; cin.ignore();


double sum = 0;

for (int i = 0; i < n; i++)
{
	double x;
	cout << "Enter the value #" << i + 1 << ":\n";
	cout << ": ";
	cin >> x; cin.ignore();

	sum += x;
}

double mean = double(sum) / n;


cout << "Average/Mean = " << mean << '\n';

return 0;

*/


#pragma endregion
#pragma region 10
//Ex. 10
//Write a program that reads from user angle in degreesand converts it to radian.
/*
double degree = 30;
double radian = Convert(degree);
cout << radian;
return 0;
*/

#pragma endregion
#pragma region 11
//Ex. 11
//Write a program that reads from user angle in radian and converts it to degrees.
/*
double radian = 5.0;
double degree = Convert(radian);
printf("%.5lf", degree);
return 0;
*/
#pragma endregion
#pragma region 12
//Ex. 12
//Write a program to prompt user to input V as voltage, I as electric currentand calculates the electrical resistance R with formula :
//R = V / I

#pragma endregion
#pragma region 13
//Ex. 13
//Write a program which converts currency.Chose currencyand find exchange rate.
/*
float dollar;
cout << "Enter amount in dollars($): ";
cin >> dollar;
cout << "$" << dollar << " = " << dollar / 1.487 << " Pounds" << endl;
cout << "$" << dollar << " = " << dollar / 0.172 << " Franc" << endl;
cout << "$" << dollar << " = " << dollar / 0.584 << " Deutchemark" << endl;
cout << "$" << dollar << " = " << dollar / 0.00955 << " Yen" << endl;
return 0;
*/
#pragma endregion
#pragma region 14
//Ex. 14
//Write a program to prompt user to input a value stored 
//in variable a.Calculate ++a, a++, --a, a-- but before each calculation restore variable a to user's value.

#pragma endregion
#pragma region 15
//Ex. 15
//Write a program that reads from user two points in cartesian coordinatesand finds midpoint between them.
/*
int x1 = -1, y1 = 2;
int x2 = 3, y2 = -6;
midpoint(x1, x2, y1, y2);
return 0;
*/
#pragma endregion
#pragma region 16
//Ex. 16
//Write a program that calculates kinetic energy from rigid bodies.Use formula 
//: Ek = (p ^ 2) / 2m where Ek is kinetic energy, p is momentum, m is mass of the body.Read variables from user.

#pragma endregion
#pragma region 17
//Ex. 17.
//Write a flowchart for boiling water for a tea.

#pragma endregion
#pragma region 18
//Ex. 18
//Write a flowchart for determination whether a temperature is below or above
//the freezing point(0 in Celcius scale, 32 in Farenhait scale).

#pragma endregion








	
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
