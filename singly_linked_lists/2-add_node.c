#include "lists.h"
#include <string.h>
#include <stdio.h>

list_t *add_node(list_t **head, const char *str)
{
  list_t *node;
  int i = 0;

  node = malloc(sizeof(*node));
  if(!node)
  {
    return NULL;
  }


  while(str[i])
    i++;

  node->str = strdup(str);
  node->len = i;
  node->next = *head;
  *head=node;

  return(node);
}
