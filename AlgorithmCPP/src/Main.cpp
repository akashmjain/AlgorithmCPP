#include "includes\Defs.h"

int main()
{
	int arr[] = { 1, 6, 3, 2, 3 };
	int len = *(&arr + 1) - arr;
	InsertionSort(arr, len);
	for (int x : arr)
	{
		log(x);
	}
}
