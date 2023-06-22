#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using the
 *               Bubble Sort algorithm.
 *
 * @array: Pointer to the array to be sorted.
 * @size: Size of the array.
 */

void bubble_sort(int *array, size_t size)
{
	int i, tmp, swaped;

	do
	{
		swaped = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swaped = 1;
				swaper(&array[i], &array[i+1]);
				print_array(array, size);
			}
		}
	} while(swaped);
}
