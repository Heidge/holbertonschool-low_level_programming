#include "lists.h"
#include <string.h>
#include <stdio.h>

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *node;

    node = malloc(sizeof(node));
    if (!node)
        return NULL;

    node->str=strdup(str);
    node->len=strlen(str);
    node->next = NULL;

    if(*head == NULL)
        *head = node;
    else
    {
        list_t *temp = *head;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = node;
    }

    return node;
}