#include "sort.h"

/**
 * selection_sort - sorts an array of integers using selection sort algorithm
 * @array: pointer to array of integers to selection sort
 * @size: size of array
 **/

void selection_sort(int *array, size_t size)
{
	int index = 0, temp = 0, min = 0, mindex, searcher;

	if (array == NULL || size < 2)
		return;
	for (; array[index]; index++)
	{
		for (searcher = index, min = array[index]; array[searcher]; searcher++)
		{
			if (array[searcher] < min)
			{
				min = array[searcher];
				mindex = searcher;
			}
		}
		if (array[index + 1] != '\0')
		{
			temp = array[index];
			array[index] = min;
			array[mindex] = temp;
			print_array(array, size);
		}
	}
}
