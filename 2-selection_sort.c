#include "sort.h"

/**
 
selection_sort - a function to sort array elements using selection sort
@array: array to be sorted
@size: the number of elements in the array
*/

void selection_sort(int *array, size_t size)
{
    size_t i, j, min_idx;
    int temp;

    if (size < 2 || array == NULL)
        return;
    for (i = 0; i < size - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[min_idx])
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
