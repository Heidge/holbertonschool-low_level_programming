#include "lists.h"
#include <string.h>
#include <stdio.h>

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *node, *temp;
    int i = 0;

    node = malloc(sizeof(node));
    if(!node)
        return NULL;

    while(str[i])
        i++;

    node->str = strdup(str);
    node->len = i;
    node->next = NULL;

    temp = *head;

    if (!*head)
        *head = node;
    else
    {
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = node;
    }
    

    return(*head);        
}