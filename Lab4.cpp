#include <iostream>
#include <ctime> //This is for Random Array time()

using namespace std;

void writealoop1();
void SequenceEx2();
void singleletters3();
void patternintoarray4();
void RandomArrayEx5();
void FPointsEx6();
void MeanEx7();
void OddIndexPrintEx8();
void GreatertenEx9();
void ASCIIEx10();
void WordCheckerEx11();
void LetterOccurenceEx12();

int main()
{
	//writealoop1();
	//SequenceEx2();
	//singleletters3();
	//patternintoarray4();
	//RandomArrayEx5();
	//FPointsEx6();
	//MeanEx7();
	//OddIndexPrintEx8();
	//GreatertenEx9();
	//ASCIIEx10();
	//WordCheckerEx11();
	//LetterOccurenceEx12();
}


void writealoop1() {
	double values[5] = { 2,4,8,5,6 };
	double min = values[0];
	for (int i = 1; i < 5; i++) {
		if (values[i] < min) {
			min = values[i];
		}
	}
	cout << min << endl;
	
}

void SequenceEx2()
{
	int Limit;
	cout << "Enter the stop integer (if you want to stop sequence at 100 ([0,100))) write 100..." << endl;
	cin >> Limit;
	int* Sequence;
	Sequence = new int[Limit / 5];
	for (int i = 0; i < Limit; i = i + 5)
	{
		Sequence[i / 5] = i;
	}
	cout << "Sequence  = ";
	for (int i = 0; i < Limit / 5; i++)
	{
		cout << Sequence[i] << " ";
	}
	cout << endl;
}

void singleletters3() {
	int n[5];
	int i, j;


	for (i = 0; i < 5; i++)
	{
		cout << "Enter value of n[" << i << "]" << endl;
		cin >> n[i];
	}

	for (j = 0; j < 5; j++)
	{
		cout << "n[" << j << "] = " << n[j] << endl;
	}

	
}

void patternintoarray4() {
	int n, i;
	float num[100], sum = 0.0, average;

	cout << "Enter the numbers of data: ";
	cin >> n;

	while (n > 100 || n <= 0)
	{
		cout << "Error! number should in range of (1 to 100)." << endl;
		cout << "Enter the number again: ";
		cin >> n;
	}

	for (i = 0; i < n; ++i)
	{
		cout << i + 1 << ". Enter number: ";
		cin >> num[i];
		sum += num[i];
	}

	average = sum / n;
	cout << "Average = " << average;

	
}

void RandomArrayEx5()
{
	int size;
	int counter = 0;
	cout << "Enter the size of array:";
	cin >> size;
	int *randArray = new int[size];
	srand((unsigned)time(0)); //This is for to take exactly random number(to prevent to take each time take same array)...
	for (int i = 0; i < size; i++)
		randArray[i] = rand() % 10;  //Generate number between 0 to 9
	cout << "Array of random integers = ";
	for (int i = 0; i < size; i++)
	{
		cout << randArray[i] << " ";
		if (randArray[i] == 5)
			counter++;

	}
	cout << endl;
	cout << "The number of 5 in array = " << counter << endl;
}

void FPointsEx6()
{
	int size;
	cout << "Enter the size of array:";
	cin >> size;
	float* FloatArray = new float[size];
	cout << "Write the " << size << " elements(float (ex: 2.4)) and press enter after each input" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> FloatArray[i];
	}
	cout << "This is the float array that you entered = ";
	for (int i = 0; i < size; i++)
	{
		cout <<  FloatArray[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		FloatArray[i] = FloatArray[i] * FloatArray[i];
	}
	cout << "This is the float array after 2nd power of elements = ";
	for (int i = 0; i < size; i++)
	{
		cout << FloatArray[i] << " ";
	} 
	cout << endl;


}

void MeanEx7()
{
	int size;
	cout << "Enter the size of array:";
	cin >> size;
	double mean = 0;
	int* randArray = new int[size];
	srand((unsigned)time(0)); //This is for to take exactly random number(to prevent to take each time take same array)...
	for (int i = 0; i < size; i++)
		randArray[i] = rand() % 50;  //Generate number between 0 to 9
	cout << "Array of random integers (I added random range 50 to make it simple to read) = ";
	for (int i = 0; i < size; i++)
	{
		cout << randArray[i] << " ";
		mean = mean + randArray[i];
		
	}
	cout << endl;
	mean = mean / size;
	cout << "This is the mean (average) of array = " << mean << endl;


}

void OddIndexPrintEx8()
{
	int size;
	cout << "Enter the size of array:";
	cin >> size;
	float* FloatArray = new float[size];

	cout << "Write the " << size << " elements(float (ex: 2.4)) and press enter after each input" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> FloatArray[i];
	}

	cout << "Odd indexed numbers in array (Index[1], Index[3] ...) = ";
	for (int i = 1; i < size; i = i + 2)
	{
		cout << FloatArray[i] << " ";
	}
	cout << endl;
}

void GreatertenEx9()
{
	int size;

	cout << "Enter the size of array (Max 100) = ";
	cin >> size;
	int* randArray = new int[size];
	int Arr[100];
	int count = 0;
	srand((unsigned)time(0)); //This is for to take exactly random number(to prevent to take each time take same array)...
	for (int i = 0; i < size; i++)
		randArray[i] = rand() % 15;  //Generate number between 0 to 15
	cout << "Array of random integers([0,14] range) = ";
	for (int i = 0; i < size; i++)
	{
		cout << randArray[i] << " ";
		if (randArray[i] > 10)
		{
			Arr[count] = randArray[i];
			count++;
		}

	}
	cout << endl;
	
	cout << "These are the numbers which is greater than 10 = ";
	for (int i = 0; i < count; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
}

void ASCIIEx10()
{
	int size;

	cout << "Enter the size of array (Max 100) = ";
	cin >> size;
	int* randArray = new int[size];
	char* ArrayASCII = new char[size];

	srand((unsigned)time(0)); //This is for to take exactly random number(to prevent to take each time take same array)...
	for (int i = 0; i < size; i++)
		randArray[i] = (rand() % 191) + 64;  //Generate number between 0 to 15
	
	for (int i = 0; i < size; i++)
	{
		ArrayASCII[i] = (char)randArray[i];

	}
	cout << "ASCII Array converted from int to char = ";
	for (int i = 0; i < size; i++)
		cout << ArrayASCII[i] << " ";
	cout << endl;
}

void WordCheckerEx11()
{
	cout << "Word checker" << endl;
	
	string word1;
	string word2;
	cout << "Enter the first word = ";
	cin >> word1;
	cout << "Enter the second word = ";
	cin >> word2;
	if (word1 == word2)
		cout << "Words are equal" << endl;
	else
		cout << "Words are different (not equal)" << endl;
}

void LetterOccurenceEx12()
{

	string word;
	cout << "Enter word = ";
	cin >> word;
	int count = 0;
	cout << "Capital letters count" << endl;
	for (int i = 65; i < 91; i++)
	{
		for (int k = 0; word[k] != NULL; k++)
		{
			if ((int)word[k] == i)
			{
				count++;
			}

		}
		if (count != 0)
		{
			cout << (char)i << " count is = " << count << endl;
			count = 0;
		}
		
	}

	cout << "Small letters count" << endl;
	for (int i = 97; i < 122; i++)
	{
		for (int k = 0; word[k] != NULL; k++)
		{
			if ((int)word[k] == i)
			{
				count++;
			}

		}
		if (count != 0)
		{
			cout << (char)i << " count is = " << count << endl;
			count = 0;
		}

	}


}