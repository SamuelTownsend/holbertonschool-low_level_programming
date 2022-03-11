#include "lists.h"

/**
* insert_nodeint_at_index - check the code
* @head: double pointer
* @idx: interger array
* @n: inerger variable
* Return: nnode
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nnode, *onode;
	unsigned int n;

	if (head == NULL)
		return (NULL);
	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
		return (NULL);
	nnode->n = n;
	if (idx == 0)
	{
		nnode->next = *head;
		*head = nnode;
		return (nnode);
	}
	onode = *head;
	for (n = 0; n < idx - 1; n++)
	{
		if (onode->next == NULL)
			return (NULL);
		onode = onode->next;
	}
	nnode->next = onode->next;
	onode->next = nnode;
	return (nnode);
}
