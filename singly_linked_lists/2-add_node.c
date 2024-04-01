#include "lists.h"

/**
 * add_node - Add an element to a list at the front of the list
 * @head: Pointer to the pointer to the start of the list
 * @str: Pointer to the string to be put into the element of the list
 *
 * Return: Address of new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tmp_node;
	unsigned int i;

	i = 0;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	while (str[i] != '\0')
		i++;
	new_node->len = i;
	tmp_node = *head;
	new_node->next = tmp_node;
	*head = new_node;
	return (*head);
}