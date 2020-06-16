
// C++ program to implement Binary Search and Linear Search
#include "includes\Defs.h"


/*	recursive binary search function. It returns
	location of s in given array arr[l..r] is present,
	otherwise -1
*/
int BinarySearch(int arr[], int search, int start, int end)
{

	if (end >= start)
	{
		// finding mid value in array	
		int mid = start + (end - start) / 2;
		if (arr[mid] == search)
		{
			return mid;
		}
		if (arr[mid] > search)
		{
			return BinarySearch(arr, search, start, mid - 1);
		}

		return BinarySearch(arr, search, mid + 1, end);
	}
	return -1;
}
int LinearSearch(int arr[], int search)
{


	for (int i = 0; i < sizeof(arr); i++)
	{
		if (search == arr[i])
			return i;
	}
	return -1;
}