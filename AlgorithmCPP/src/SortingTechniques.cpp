// C++ program to implement Sorting Algorithms
#include "includes\Defs.h"
// Insertion sort by using CLRS Algorithm book
void InsertionSort(int arr[], int len)
{
	for (int i = 1, j, key; i < len; i++)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

// Merge Sort by using CLRS Algo Book
