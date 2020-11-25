// lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdio>
using namespace std;

void twodimentional2();
void twodimentional5();
void twodimentional6();
void reversestring9();

int main()
{
    //twodimentional2();
    //twodimentional5();
    //twodimentional6();
    //reversestring9();
}

void twodimentional2() {
    int n1[3][3];
    n1[0][0] = 1;
    n1[0][1] = 2;
    n1[0][2] = 5;
    n1[1][0] = 7;
    n1[1][1] = 3;
    n1[1][2] = 4;
    n1[2][0] = 9;
    n1[2][1] = 3;
    n1[2][2] = 7;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << n1[i][j] << " ";
        }
        cout << endl;
    }
}

void twodimentional5() {
    int i, n;
    float arr[100];

    cout << "Enter total number of elements(1 to 100): ";
    cin >> n;
    cout << endl;

    for (i = 0; i < n; ++i)
    {
        cout << "Enter Number " << i + 1 << " : ";
        cin >> arr[i];
    }
    for (i = 1; i < n; ++i)
    {

        if (arr[0] > arr[i])
            arr[0] = arr[i];
    }
    cout << "Minimum element = " << arr[0];
}

void twodimentional6() {
    int i, n;
    float arr[100];

    cout << "Enter total number of elements(1 to 100): ";
    cin >> n;
    cout << endl;

    for (i = 0; i < n; ++i)
    {
        cout << "Enter Number " << i + 1 << " : ";
        cin >> arr[i];
    }
    for (i = 1; i < n; ++i)
    {

        if (arr[0] > arr[i])
            arr[0] = arr[i];
    }
    cout << "Largest element = " << arr[0];
}


void reversestring9() {
    char s[1000], r[1000];
    int begin, end, count = 0;

    cout << ("Input a string\n");
    gets_s(s);

    // Calculating string length

    while (s[count] != '\0')
        count++;

    end = count - 1;

    for (begin = 0; begin < count; begin++) {
        r[begin] = s[end];
        end--;
    }

    r[begin] = '\0';

    cout << ("%s\n", r);

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
