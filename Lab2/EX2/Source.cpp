#include <iostream>
using namespace std;
void merge(int* A1, int* A2, int s1, int s2,int *&merged) {
	merged = new int[s1 + s2];
	int k = 0;
	for (int i = 0; i < s1; i++)
	{
		merged[k] = A1[i];
		k++;
	}
	for (int i = 0; i < s2; i++)
	{
		merged[k] = A2[i];
		k++;
	}

	//// this function takes as an input int array “A1”, “A2” of sizes “s1” and “s2”
	//respectively.
	//	// the function generates a new array consists of all elements in the two arrays
	//	“A1”, ”A2”(elements of A1 then elements of A2).
	//	// the function is void.
	//	// The input arrays should not be changed.
	//	// add parameters to the function as needed, this should be justified in the
	//	discussion
	//	// hint what should be the size of the new generated array ?
	//	// and how it should be passed to the function ?
}
int main()
{
	int* A1, * A2;
	int s1, s2;
	cin >> s1;
	A1 = new int[s1];
	for (int i = 0; i < s1; i++)
		cin >> A1[i];
	cin >> s2;
	A2 = new int[s2];
	for (int i = 0; i < s2; i++)
	{
		cin >> A2[i];
	}
	int* A3;
	merge(A1, A2, s1, s2, A3);
	for (int i = 0; i < s1+s2; i++)
	{
		cout << A3[i] << " ";
	}
	// the main function
	// generates two integer arrays
	// gets the arrays elements from the user
	// then it calls the "merge" function
	// then it prints the merged array.
	return 0;
}
// make sure you deallocate any dynamically allocated memory.