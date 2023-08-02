#include "lists.h"
/**
  *sum_listint - the sum of all numbers in the linked list
  *@head: The head of the linked list
  *Return: The sum of all numbers in the linked list
  */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
