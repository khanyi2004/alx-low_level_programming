#include "lists.h"
/**
  *get_nodeint_at_index - function that return an index of node
  *@head: the head of the linked list
  *@index: the index we want to remove
  *Return: the node from the index
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
