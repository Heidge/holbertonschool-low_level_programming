#include "main.h"

/**
 * 
 */

void print_rev(char *s)
{
    int i = 0;

    while(s[i])
        i++;

    for (; i >= 0; i--)
        _putchar(s[i]);

    _putchar('\n');
}