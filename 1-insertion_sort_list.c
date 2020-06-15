#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * using the insertion sort algorithm
 * @list: pointer to pointer to head of doubly
 * linked list of integers to insertion sort
 **/

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;
	int count = 2, sorted = 0;

	if (*list == NULL)
		return;
	current = *list;
	while (!sorted)
	{
		while (current && current->next)
		{
			if (current->next->n < current->n)
			{
				temp = current->next;
				temp->prev = current->prev;
				temp->next->prev = current;
				current->prev->next = temp;
				current->prev = temp;
				current->next = temp->next;
				temp->next = current;
				/* temp = current->next;
				current->next = temp->next;
				temp->next = current;
				current->prev->next = temp;
				temp->prev = current->prev;
				current->prev = temp;
				current->next->prev = current; */
				print_list(*list);
				break;
			}
			current = current->next;
			count++;
		}
		if (count == 4)
			sorted = 1;
		/* GET NODE AT INDEX OF COUNT + 1 AS THAT'S FIRST NON SORTED NODE */
	}
}
