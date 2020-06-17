#include "sort.h"

/**
 * quick_sort - sorts an array of integers using quick sort algorithm
 * @array: pointer to array of integers to quick sort
 * @size: size of array
 **/

void quick_sort(int *array, size_t size)
{
	(void)array, (void)size;
	/* QUICK_SORT (ARRAY, START, END) */
	/* BASE CASE: START >= END OR LIST SIZE == 1 */
	/* {
		if (start < end)
		{
			partition(array, start, end);
			return (pindex from partition);
			quick_sort(array, start, pindex - 1);
			quick_sort(array, pindex + 1, end);
		}
	} */
}

/**
 * partition - partitions an array using the Lomuto partition scheme
 * @array: pointer to array of integers to quick sort
 * @start: index of start of partition
 * @end: index of end of partition
 *
 * Return: partition index
 **/

int partition(int *array, int start, int end)
{
	int pindex = start /* , pivot = array[end] */;

	(void)array, (void)start, (void)end;
	/* for (i = start; i < end - 1; i++)
	{
		if (array[i] <= pivot)
		{
			swap(array[i], array[pindex]);
			pindex++;
		}
	}
	swap(array[pindex], array[end]); */
	return (pindex);
}
