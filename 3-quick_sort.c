#include "sort.h"

void quick_sort_helper(int arr[], int low, int high, size_t size)
{
	int pivot;
	if (low < high)
	{
		pivot = partition(arr, low, high, size);
		quick_sort_helper(arr, low, pivot - 1, size);
		quick_sort_helper(arr, pivot + 1, high, size);
	}
}


void quick_sort(int *array, size_t size)
{
	quick_sort_helper(array, 0, size - 1, size);
}
