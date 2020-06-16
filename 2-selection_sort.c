#include "sort.h"

/**
 * selection_sort - sorts an array of integers using selection sort algorithm
 * @array: pointer to array of integers to selection sort
 * @size: size of array
 **/

void selection_sort(int *array, size_t size)
{
	int index = 0, temp = 0, /* sorted = 0,  */ min = 0, mindex, searcher;
	/* size_t count = 1; */

	if (array == NULL || size < 2)
		return;
	/* min = array[0]; */
	for (; array[index + 2]; index++)
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
		}
		print_array(array, size);
	}

	/* while (!sorted)
	{
		index = 0;
		min = array[swindex];
		while (array[index])
		{
			if (array[index] < min)
			{
				min = array[index];
				mindex = index;
			}
			if (array[index + 1] == '\0')
			{
				temp = array[swindex];
				array[swindex] = min;
				array[mindex] = temp;
				print_array(array, size);
				min = array[swindex];
				swindex++;
				index = 0;
				count++;
				break;
			}
			index++;
		}

		if (count == size)
			sorted = 1;
	} */
}
