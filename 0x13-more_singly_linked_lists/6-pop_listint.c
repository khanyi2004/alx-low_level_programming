#include "lists.h"
/**
  *pop_listint - remove the head of a linked list
  *@head : the head of a linked list
  *Return: the value in the list
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
