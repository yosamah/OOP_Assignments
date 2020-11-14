#include <iostream>
using namespace std;


void EvensFirst(int* arr, int n, int*& B);

int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int* B;
	EvensFirst(arr, n, B);
	for (int i = 0; i < n; i++)
		cout << B[i] << " ";
	delete[] arr;
	delete[] B;
	return 0;
}


void EvensFirst(int* arr, int n, int*& B)
{
	int k = 0;
	B = new int[n];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			B[k] = arr[i];
			k++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 != 0)
		{
			B[k] = arr[i];
			k++;
		}
	}
}