#include "sort.h"
#define SWAP_NEEDED ((array[index] && array[index + 1]) && (array[index] > array[index + 1]))

/**
 * bubble_sort - sorts an array of integers using bubble sort algorithm
 * @array: pointer to array of integers to bubble sort
 * @size: size of array
 **/

void bubble_sort(int *array, size_t size)
{
	int index = 0, temp = 0, sorted = 0;
	size_t count = 1;

	if (array == NULL || size < 2)
		return;
	while (!sorted)
	{
		if (SWAP_NEEDED)
		{
			temp = array[index];
			array[index] = array[index + 1];
			array[index + 1] = temp;
			print_array(array, size);
		}
		if (array[index + 1])
			index++;
		else
		{
			index = 0;
			count++;
		}
		if (count == size)
			sorted = 1;
	}
}
