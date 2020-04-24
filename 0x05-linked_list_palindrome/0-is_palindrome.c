#include "lists.h"
/**
 * is_palindrome - verify is a linked list is palindorme
 * @head: head
 * Return: 0 is there is no palidrome, 1 if there is palindrome in the list
 */
int is_palindrome(listint_t **head)
{
	listint_t *idx_main = *head;
	int array[1000000];
	int index1 = 0;
	int index2 = 0;

	if (*head == NULL)
	{
		return (1);
	}
	while (idx_main != NULL)
	{
		array[index1++] = idx_main->n;
		idx_main = idx_main->next;
	}
	while (index2 < index1)
	{
		if (array[index2] != array[index1 - 1 - index2])
		{
			return (0);
		}
		index2++;
	}
	return (1);
}
