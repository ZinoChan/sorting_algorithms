#include "sort.h"

/**
 * swaper - swapes
 * @a: arg
 * @b: arg
 */
void swaper(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}


/**
 * partition - selection----
 * @arr: arg
 * @low: arg
 * @high: arg
 * @size: size
 * Return: int
 */
int partition(int *arr, int low, int high, size_t size)
{
	int pivot = arr[high], i = low - 1, j;

	for (j = low; j <= high - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swaper(&arr[i], &arr[j]);
			print_array(arr, size);
		}
	}
	swaper(&arr[i + 1], &arr[high]);
	print_array(arr, size);
	return (i + 1);
}

/**
 * quick_sort_helper - swapes
 * @arr: arg
 * @low: arg
 * @high: arg
 * @size: size
 */
void quick_sort_helper(int *arr, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(arr, low, high, size);
		quick_sort_helper(arr, low, pivot - 1, size);
		quick_sort_helper(arr, pivot + 1, high, size);
	}
}

/**
 * quick_sort - quick sort
 * @array: Pointer to the array to be sorted.
 * @size: Size of the array.
*/
void quick_sort(int *array, size_t size)
{
	if (array != NULL)
		quick_sort_helper(array, 0, size - 1, size);
}
