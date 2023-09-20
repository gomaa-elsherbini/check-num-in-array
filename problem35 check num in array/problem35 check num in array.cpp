#include <iostream>
#include <cstdlib>
using namespace std;




int RandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}
void readArray(int arr[], int& length)
{
	cout << "How Many elements in the array?\n";
	cin >> length;

	for (int i = 0; i < length; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
}
void printArray(int arr[], int length)
{
	cout << "Array 1 Elements: \n";
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int readNumberToCheck()
{
	int num;
	cout << "Please enter a number to search for?\n";
	cin >> num;

	return num;
}

int NumberPositionInArray(int arr[], int length, int num)
{
	for (int i = 0; i < length; i++)
	{
		if (num == arr[i])
			return i;
	}
	return -1;
}

bool checkNumberInArray(int arr[], int length, int num)
{
	return NumberPositionInArray(arr, length, num) != -1;
}

void printFindNumberCheck(int arr[], int length, int num)
{
	if (checkNumberInArray(arr, length, num))
	{
		cout << "Number Yor are looking for is : " << num << endl;
		cout << "Yes, the number is found :-) " << endl;
	}
	else
	{
		cout << "Number Yor are looking for is : " << num << endl;
		cout << "No, the number is not found :-( " << endl;
	}
}


int main()
{
	srand((unsigned)time(NULL));

	int arr[100], length;

	readArray(arr, length);
	printArray(arr, length);
	int numToCheck = readNumberToCheck();

	printFindNumberCheck(arr, length, numToCheck);


	return main();
}