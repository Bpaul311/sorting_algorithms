#include "sort.h"

/**
 * bubble_sort - function that sort an array of elements.
 * @array: The array of integers to be sorted.
 * @size: The size of elements in the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;

	if (size <= 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
