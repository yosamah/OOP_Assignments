#include <iostream>
using namespace std;


int* PositiveEven(int* arr, int n, int& nS);

int main()
{
	int n;
	cout << "Size of ArrX = ";
	cin >> n;
	int* arr = new int[n];
	cout << "Elements of ArrX = ";
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int nS;
	int* arrY = PositiveEven(arr, n, nS);
	cout << "ArrY= ";
	for (int i = 0; i < nS; i++)
		cout << arrY[i] << " ";
	return 0;
}

int* PositiveEven(int* arr, int n, int& nS)
{
	nS = 0;
	for (int i = 0; i < n; i++)
	{
		if ((arr[i] > 0) && (arr[i] % 2 == 0))
			nS++;
	}
	int* newArr = new int[nS];
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if ((arr[i] > 0) && (arr[i] % 2 == 0) && (k < nS))
		{
			newArr[k] = arr[i];
			k++;
		}
	}
	return newArr;
}