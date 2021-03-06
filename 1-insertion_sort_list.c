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
	int sorted = 0;

	if (list == NULL)
		return;
	current = *list;
	while (!sorted)
	{
		while (current && current->next)
		{
			temp = current->next;
			if (temp->n < current->n)
			{
				if (temp->next)
					temp->next->prev = current;
				temp->prev = current->prev;
				if (current->prev)
				{
					current->prev->next = temp;
					current->prev = temp;
				}
				else
				{
					current->prev = temp;
					*list = temp;
				}
				current->next = temp->next;
				temp->next = current;
				print_list(*list);
				current = *list;
			}
			else
				current = current->next;
		}
		sorted = 1;
	}
}
