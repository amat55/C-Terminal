// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include <string>;
using namespace std;

int main(int argc, char** argv)
{
#pragma region 1
	
	//Ex. 1
	//Write a program which generates sequence of X. The number of X take from user.
	/*
	int x[] = { 10,20,30,40,50 };
	
	cout << "Write 5 numbers: ";
	cin >> x[0];
	cin >> x[1];
	cin >> x[2];
	cin >> x[3];
	cin >> x[4];
	cout << "First score at index 1: " << x[0] << endl;
	cout << "Second score at index 2: " << x[1] << endl;
	cout << "Third score at index 3: " << x[2] << endl;
	cout << "Foruth score at index 4: " << x[3] << endl;
	cout << "Fifth score at index 5: " << x[4] << endl;
	*/
#pragma endregion
#pragma region 2
	//Ex. 2
	//Write a program which generates sequence :
#pragma endregion
#pragma region 3
	
	//Ex. 3
	//Write a program which types numbers divided by 5 in range from 1 to 100
	/*
	int i;
	for (i = 0; i <= 100; i++) {
		if (i % 5 == 0) {
			cout << i << endl;
		}
	}
	*/
	

	
#pragma endregion
#pragma region 4
	//Ex. 4
	//Write a program which generates pattern of O.Size of pattern take from user.
	/*
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {

		for (int k = 0; k < N; k++)
		{
			cout << "A";

		}
		cout << endl;

	}
	 */ 
	
#pragma endregion
#pragma region 5
	//Ex. 5
	//Write a program which generates pattern of O.Lines of pattern take from user.
	/*
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {

		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}

		for (int k = 0; k < N - i; k++)
		{

			cout << "O";

		}
		cout << endl;

	}
	*/
	
#pragma endregion
#pragma region 6
	//Ex. 6
	//Write a program which generates pattern of O.Size of  pattern take from user.
	/*
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {

		for (int k = 0; k < N - i; k++)
		{
			cout << "V";
		}
		cout << endl;

	}
	for (int i = N - 1; 0 < i; i--) {

		for (int k = N - i + 1; 0 < k; k--)
		{
			cout << "V";

		}
		cout << endl;

	}
	*/
#pragma endregion
#pragma region 7
	//Ex. 7
	//Write a program which generate table :
/*
int n, i, j, k, m = 0;
cout << " Input number or rows: ";
cin >> n;
for (i = 1; i <= n; i++) {
	if (i == 1) {
		for (j = 1; j <= i; j++) {
			cout << m << "  ";
		}
		for (k = 1; k <= n - i; k++) {
			cout << k << "  ";
		}
	}
	else {
		for (k = i - 1; k >= 1; k--) {
			cout << k << "  ";
		}
		cout << m << "  ";
		for (j = 1; j <= n - i; j++) {
			cout << j << "  ";
		}
	}
	cout << endl;
}
cout << endl;
*/
#pragma endregion
#pragma region 8
	//Ex. 8 
	//Write a program which generate upper triangular matrix :

#pragma endregion
#pragma region 9
	//Ex. 9 
	//Write a program which generate lower triangular matrix :

#pragma endregion
#pragma region 10
	//Ex. 10
	//Write a program which generate diagonal matrix :
	
/*
	int size,bro=1;
	cout << "Write size of matrix\n";
	cin >> size;

	for (int i = 1; i < size + 1; i++)
	{
		for (int j = 1; j < size + 1; j++)
		{
			if (i == j)
				cout << bro++ << " ";
			else
				cout << 0 << " ";
		}
		cout << "\n";
	}
	return 0;
	*/
#pragma endregion
#pragma region 11
	//Ex. 11
	//Write a program which generate table :

#pragma endregion
#pragma region 12
	//Ex. 12
	//Write a program which generates pattern of O.Size of  pattern take from user.

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
