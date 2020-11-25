// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<ctype.h>
using namespace std;

int main()
{
#pragma region 1
	//Ex. 1
	//Write a program to prompt user name of favourite gameand decide what kind of game he chose.
	//Use switch statemant, at least five casesand default case.
/*
	string games[5] = { "1=Farcry","2=Outlast","3=Cimcity","4=Call of Duty","5=Witcher" };
	int _pick;
	cout << "What is your favourite game?=  ";
	for (int i=0; i < 5  ; i++) {
		cout << games[i] << endl;
	}
	cin >> _pick;
	if (_pick == 1) {
		cout << "Your favourite game is Farcry";
	}
	if (_pick == 2) {
		cout << "Your favourite game is Outlast";

	}
	if (_pick == 3) {
		cout << "Your favourite game is Cimcity";

	}
	if (_pick == 4) {
		cout << "Your favourite game is Call of Duty";

	}
	if (_pick == 5) {
		cout << "Your favourite game is Witcher";

	}
	else {
		cout << "Try again!";
	}
	*/
#pragma endregion
#pragma region 2
	//Ex. 2
	//Write a program to prompt user number of weekdayand change for written name.Use switch statement.
	/*
	string days[7] = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
	int _number;

	cout << "Select day	"<<endl;
	for (int i = 0; i < 7; i++) {
		cout << days[i] << endl;

	}
	cin >> _number;
	switch (_number)
	{
	case 1:cout << "Monday"; break;
	case 2:cout << "Tuesday"; break;
	case 3:cout << "Wednesday"; break;
	case 4:cout << "Thursday"; break;
	case 5:cout << "Friday"; break;
	case 6:cout << "Saturday"; break;
	case 7:cout << "Sunday"; break;

	default:cout << "No valid value";
		break;
	}
	*/
		
#pragma endregion
#pragma region 3
	//Ex. 3
	//Write a program to prompt user a number.Using switch statement change the number to roman numberals

	/*
	int _number;
	cout << "Write number= ";
	cin >> _number;
	switch (_number)
	{
	case 1:cout << "I"; break;
	case 2:cout << "II"; break;
	case 3:cout << "III"; break;
	case 4:cout << "IV"; break;
	case 5:cout << "V"; break;
	default:cout << "No valid value";
		break;
	}
	*/
#pragma endregion
#pragma region 4
	//Ex. 4
		//Write a C++ program that reads form user two numbers : 
	//dividend and divisor.Use ternary operator to check if dividend is divided by divisor without 
		//remainder.Print aproppriate output.
		
#pragma endregion
#pragma region 5
		//Ex. 5
		//Write a C++ program to prompt user number of test points and calculates grade as follows:
#pragma endregion
#pragma region 6
	//Ex. 6
	//Write a program to check value taken from user if it is divisible by 3 and 5. Use ternary operator.
	/*
	int _number;
	cout << "Write number= ";
	cin >> _number;
	if (_number % 3 == 0) {
		cout << "Your number is divided to 3" << endl;
	}
	if (_number % 5 == 0) {
		cout << "Your number is divided to 5" << endl;
	}
	else {
		cout << "Wrong value!";
	}
	*/
#pragma endregion
#pragma region 7
//Ex. 7.
//Write a program to check if three values given by user can be used for making a triangle
//.Condition on the sides of triangle tells us that that the sum of the lengths
//of any two sides of a triangle must be greater than or equal to the length of the third side.

#pragma endregion
#pragma region 8
//Ex. 8
//Write a program to input any letterand check whether it is vowel or consonant.

/*
char ch;
cout << "Enter a character : ";
cin >> ch;
if (isdigit(ch))
cout << "\nThe entered character is a digit.";
else if (isalpha(ch))
{
	if ((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U') || (ch == 'a') || (ch == 'e') ||
		(ch == 'i') || (ch == 'o') || (ch == 'u'))
		cout << "\nThe entered character is a vowel.";
	else
		cout << "\nThe entered character is a consonant.";
}
else
cout << "\nThe entered character is a special character.";
return 0;

*/
#pragma endregion
#pragma region 9
//Ex. 9.
//Write a program to input a numberand check if it is divisible by 2 or not.
//If it is divisible by 2 check if it is divisible by 5 and print information about it. 
//if it is not divisible by 2 check if it is divisible by 3 and print information about it.
/*
int _number;
cout << "Write number= ";
cin >> _number;
if (_number % 2 == 0) {
	cout << "the number is divided by 2";
	
}
if (_number % 5 == 0) {
	cout << "the number is divided by 5";

}
if (_number % 3 == 0) {
	cout << "the number is divided by 3";
}
else {
	cout << "Wrong value!";
}
*/

#pragma endregion
#pragma region 10
//Ex. 10.
//Write a program to count body mass index.User types his weight than reads output on the console.
/*
float _number,_number2,_number3,_result;
cout << "how tall are you?=  ";
cin >> _number;
cout << "what is your weight?= ";
cin >> _number2;
_number3 = _number * _number;
_result= _number2/_number3  ;
cout << "body mass index= " << _result << "BMI" << endl;
*/
#pragma endregion
#pragma region 11
//Ex.11.
//Write a program to prompt user a fruitand prints vitamins of the fruit.Decide from which fruits user can chose.
/*
string _number[5] = { "apple","banana","orange","grape","pineapple" };
int _n1;
cout << "which kind of would you like to eat?= ";
for (int i = 0; i < 5; i++) {
	cout << _number[i] << endl;
}
cin >> _n1;
switch (_n1)
{
case 1:cout << "C vitamin"; break;
case 2:cout << "A, B1, B2, C and E vitamin"; break;
case 3:cout << "C and B vitamin"; break;
case 4:cout << "A and C vitamin"; break;
case 5:cout << "C and A vitamin"; break;
default:cout << "Wrong value!";
	break;
}
*/
#pragma endregion
#pragma region 12
//Ex. 12.
//Write a program to input a 3 - digit number and count sum of digits.
//Check if sum is greater than the numberand print information about it.
/*
int val, num, sum = 0;

cout << "Enter the number : ";
cin >> val;
num = val;
while (num != 0)
{
	sum = sum + num % 10;
	num = num / 10;
}
cout << "The sum of the digits of "<< val << " is " << sum<<endl;
if (sum >= val) {
	cout << "sum is greater than the number ";
}
if (sum <= val) {
	cout << "is less than the total number ";
}
*/
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
