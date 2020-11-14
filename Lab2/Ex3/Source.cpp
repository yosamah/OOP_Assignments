#include <iostream>
using namespace std;

int* doubler(int a[], int size, int& newSize);


int main()
{
	int size;
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
		cin >> arr[i];
	int newSize;
	int* B = doubler(arr, size, newSize);
	for (int i = 0; i < newSize; i++)
		cout << B[i] << " ";
	// the main function
// generates an integer array
// gets the array elements from the user
// then it calls the "doubler" function
// then it prints the doubled array.

	return 0;
}



int* doubler(int a[], int size, int& newSize)
{
	int* B;
	newSize = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] != 0)
			newSize++;
	}
	B = new int[newSize];
	int k = 0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] != 0)
		{
			B[k] = 2 * a[i];
			k++;
		}
	}
	return B;
}