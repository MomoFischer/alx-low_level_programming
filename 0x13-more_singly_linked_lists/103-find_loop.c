#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the beginning of the list
 *
 * Return: address of the node where the loop starts or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *Demodras, *hare;

	Demodras = hare = head;
	while (Demodras && hare && hare->next)
	{
		Demodras = Demodras->next;
		hare = hare->next->next;
		if (tortoise == hare)
		{
			Demodras = head;
			break;
		}
	}
	if (!Demodras || !hare || !hare->next)
		return (NULL);
	while (Demodras != hare)
	{
		Demodras = Demodras->next;
		hare = hare->next;
	}
	return (hare);
}
