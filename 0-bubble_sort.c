#include "sort.h"
#define SWAP (array[index] && array[index + 1]) && (array[index] > array[index + 1])

/**
 * bubble_sort - sorts an array of integers using bubble sort algorithm
 * @array: pointer to array of integers to bubble sort
 * @size: size of array
 **/

void bubble_sort(int *array, size_t size)
{
	int index = 0, temp = 0, sorted = 0, count = 1, my_size = size;

	/* if (array == NULL)
		return; */
	while (!sorted)
	{
		if (SWAP)
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
			/* printf("Finished pass %d with < %d > as the bubbler\n\n", count, array[my_size - 1]); */
			index = 0;
			count++;
			my_size--;
		}
		if (count == 25)
			sorted = 1;
		/* INT POINTER STARTS AT LAST INDEX AND MOVES BACK 1 TOWARDS 0 AFTER THAT INDEX IS SORTED */
		/* ONCE INT POINTER HITS INDEX == 0, WE KNOW LIST IS SORTED */
	}
}
