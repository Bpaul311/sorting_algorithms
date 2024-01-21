#include "sort.h"
/**
 * insertion_sort_list - Sorts a doubly linked list in ascending order
 * @list: Address of the doubly linked list to be sorted
 *
 * Description: Implements the Insertion Sort algorithm on a doubly linked list
 *              The list is sorted in ascending order,and the nodes are swapped
 *              instead of modifying the integer values.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	if (!list || !*list || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		temp = current;
		while (temp->prev != NULL &&
				temp->n < temp->prev->n)
		{
			if (temp->next != NULL)
				temp->next->prev = temp->prev;
			temp->prev->next = temp->next;
			temp->next = temp->prev;
			temp->prev = temp->prev->prev;
			temp->next->prev = temp;

			if (temp->prev != NULL)
				temp->prev->next = temp;
			else
				*list = temp;
			print_list(*list);
		}
		current = current->next;
	}
}
