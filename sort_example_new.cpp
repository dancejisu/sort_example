#include <iostream>
using namespace std;

const int SIZE = 15;
int L[SIZE] = { 10, 4, 7, 1, -2, 12, 28, 66, 9, 3, 5, 7, 6, 21, 11 };


void print_data()
{
	for (int i = 0; i < SIZE; i++)
		cout << " " << L[i] << " ";
	cout << endl;
}

void sort()
{
	int i, j, max;
	int temp;
	for (i = SIZE - 1; i > 0; i--)
	{
		max = 0;
		for (j = 1; j <= i; j++)
			if (L[j] > L[max]) max = j;
		temp = L[max];
		L[max] = L[i];
		L[i] = temp;
	}
	//최대값이용

	/*int i, j, min;
	int temp;
	for (i = 0; i < SIZE; i++) {
		min = i;
		for (j = i + 1; j <= SIZE; j++)
			if (L[j] <  L[min]) min = j;
		temp = L[min];
		L[min] = L[i];
		L[i] = temp;
	}
	//최소값이용
	*/


}

void main()
{
	cout << "Input Data : ";
	print_data();

	/* sort the elements of array L[] in ascending order */
	sort();

	cout << "\n\nSorted Data : ";
	print_data();

}
