// Lab9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include<string>
//typedef float s1;

using namespace std;

#pragma region 1
int main()
{

	//Ex. 1
	//Declare two pointers to integer values.Print the values and address.

	int num{ 10 };
	cout << "Value of num is: " << num << endl;
	cout << "sizeOf num is: " << sizeof num << endl;
	cout << "Adress of num is: " << &num << endl;

	cout << endl;

	int* p;
	//cout << "\nValue of p is: " << p << endl; //garbage
	cout << "Adress of p is: " << &p << endl;
	cout << "sizeOf p is: " << sizeof p << endl;

	p = nullptr;
	cout << "\nValue of p is: " << p << endl;

	int* p1{ nullptr };
	double* p2{ nullptr };
	unsigned long long* p3{ nullptr };
	vector<string>* p4{ nullptr };
	string* p5{ nullptr };

	cout << "\nsizeOf p1 is: " << sizeof p1 << endl;
	cout << "sizeOf p2 is: " << sizeof p2 << endl;
	cout << "sizeOf p3 is: " << sizeof p3 << endl;
	cout << "sizeOf p4 is " << sizeof p4 << endl;
	cout << "sizeOf p5 is " << sizeof p5 << endl;

	cout << endl;

	int score{ 10 };
	double high_temp{ 100.7 };

	int* score_ptr{ nullptr };
	score_ptr = &score;
	cout << "Value of score is: " << score << endl;
	cout << "Adress of score is: " << &score << endl;
	cout << "Value of score_ptr is: " << score_ptr << endl;

	//score = &high_temp; //compiler error

	cout << endl;
	return 0;

}
#pragma endregion
#pragma region 3
//Ex. 3
//Write a program to use typedef for defining new name for existing type.Chose the type for this exercise.

//int main() {
//	s1 a = 10.1;
//	s1 b = 11.2;
//	cout << "a: " << a << endl;
//	cout << "b:" << b << endl;
//	cout << "a+b: " << a + b << endl;
//
//}


#pragma endregion

#pragma region 4
//Ex. 4	
//Declare your invented arrayand use pointer to write printout of elements of the array.

//int main() {
//
//    int score[]{ 100,95,89 };
//
//    cout << "Value of score " << score << endl;
//
//    int* score_ptr{ score };
//    cout << "Value of score_ptr " << score_ptr << endl;
//
//    cout << "\nArray subscript notation----------------" << endl;
//    cout << score[0] << endl;
//    cout << score[1] << endl;
//    cout << score[2] << endl;
//
//    cout << "\nPointer subscript notation---------------" << endl;
//    cout << score_ptr[0] << endl;
//    cout << score_ptr[1] << endl;
//    cout << score_ptr[2] << endl;
//
//    cout << "\nPointer offset notation---------------------" << endl;
//    cout << *score_ptr << endl;
//    cout << *(score_ptr + 1) << endl;
//    cout << *(score_ptr + 2) << endl;
//
//    cout << "\nArray offset notation-------------------------" << endl;
//    cout << *score << endl;
//    cout << *(score + 1) << endl;
//    cout << *(score + 2) << endl;
//
//    cout << endl;
//    return 0;
//
//
//}
#pragma endregion



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
