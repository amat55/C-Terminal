
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


#pragma region 3
//Ex. 3
//Write a program to generate random numbersand write it to the text file.

//int main()
//
//{
//	ofstream file;
//
//	file.open("randomData.txt");
//
//
//	srand((unsigned)(0));
//	int ran_data;
//	for (int index = 0; index < 100; index++) {
//		ran_data = (rand() % 199) + 1;
//		cout << ran_data << endl;
//	}
//
//	file << ran_data;
//
//	file.close();
//
//	return 0;
//
//}
#pragma endregion
#pragma region 4

#pragma endregion
#pragma region 9

//Ex. 9
//Write a program to take any filename from userand readand print its content.
//int main()
//{
//   
//    ifstream input;
//    ofstream output;
//    string filename;
//
//    int value, total = 0;
//
//    cout << "Enter the file name: " << endl;
//    cin >> filename;
//
//    input.open(filename.c_str());
//    if (input)
//    {
//        while (!input.eof())
//        {
//            input >> value;
//            total += value;
//        }
//    }
//    input.close();
//    output.open("sum.txt");
//    if (output.is_open())
//        output << total;
//    else
//        cout << "Could not access the file." << endl;
//
//    output.close();
//
//    return 0;
//}

#pragma endregion


