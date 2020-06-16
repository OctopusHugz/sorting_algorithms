#include "sort.h"

/**
 * selection_sort - sorts an array of integers using selection sort algorithm
 * @array: pointer to array of integers to selection sort
 * @size: size of array
 **/

void selection_sort(int *array, size_t size)
{
	int index = 0, temp = 0, min = 0, sorted = 0, mindex, searcher;

	if (array == NULL || size < 2)
		return;
	for (; array[index]; index++)
	{
		sorted = check_array(array);
		if (sorted)
			return;
		for (searcher = index, min = array[index]; array[searcher]; searcher++)
		{
			if (array[searcher] <= min)
			{
				min = array[searcher];
				mindex = searcher;
			}
		}
		/* printf("index is: %d\n", index);
		printf("array[index] is: %d\n", array[index]); */
		temp = array[index];
		array[index] = min;
		array[mindex] = temp;
		/* printf("min is: %d\n", min);
		printf("mindex is: %d\n", mindex);
		printf("array[index] after swap is: %d\n", array[index]);
		printf("array[mindex] after swap is: %d\n", array[mindex]); */
		if (array[index] != array[mindex])
			print_array(array, size);
		/* printf("\n\n"); */
	}
}

/**
 * check_array - checks to see if an array is sorted or not
 * @array: pointer to array of integers to selection sort
 * Return: 1 if array is sorted, 0 if unsorted
 **/

int check_array(int *array)
{
	int index = 0;

	while (array[index + 1])
	{
		if (array[index] > array[index + 1])
			return (0);
		index++;
	}
	return (1);
}
