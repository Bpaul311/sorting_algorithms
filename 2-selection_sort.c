#include "sort.h"
/**
 * selection_sort - Sorts an array using the Selection Sort algorithm.
 * @array: Array to be sorted.
 * @size: Number of elements in the array.
 *
 * Description: Selection Sort iteratively finds the minimum element in the
 * unsorted part and swaps it with the first unsorted element, gradually
 * building a sorted array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;
	int temp;

	if (size <2 || array == NULL)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array [j] , array[min_idx])
			{
				min_idx = j;
				print_array(array, size);
			}
		}
		temp = array[i];
		array[i] = array[min_idx];
		array[min_idx] = temp;
	}
}
