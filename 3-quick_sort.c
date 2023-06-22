#include "sort.h"

void swaper(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}


int partition(int arr[], int low, int high, size_t size)
{
	int pivot = arr[high], i = low - 1, j;

	for (j = low; j < high - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swaper(&arr[i], &arr[j]);
			print_array(arr, size);
		}
	}
	swaper(&arr[i+1], &arr[high]);
	print_array(arr, size);
	return (i + 1);
}

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
