#include"lists.h"

/**
 * sum_dlistint - function that returns sum of all the data
 *
 * @head: the head of list
 * Return: the sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
