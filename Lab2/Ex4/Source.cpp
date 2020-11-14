#include <iostream>
using namespace std;

void alternateSplit(int*& A, int n, int*& B, int*& C, int& s1, int& s2);

int main()
{
	int n;
	cin >> n;
	int* A, * B, * C;
	int s1, s2;
	A = new int[n];
	for (int i = 0; i < n; i++)
		cin >> A[i];

	alternateSplit(A, n, B, C, s1, s2);
	for (int i = 0; i < s1; i++)
		cout << B[i] << " ";
	cout << endl;
	for (int i = 0; i < s2; i++)
		cout << C[i] << " ";

	delete[] B;
	delete[] C;

	return 0;
}

void alternateSplit(int*& A, int n, int*& B, int*& C, int& s1, int& s2)
{
	s2 = n / 2;
	s1 = n - s2;
	B = new int[s1];
	C = new int[s2];
	int k = 0;
	int y = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			B[k] = A[i];
			k++;
		}
		else
		{
			C[y] = A[i];
			y++;
		}
	}
	delete[] A;
	A = NULL;
}