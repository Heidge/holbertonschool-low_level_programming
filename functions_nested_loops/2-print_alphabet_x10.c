#include "main.h"
/**
* print_alphabet_x10 - print 10 times alphabet
*
*
*/
void print_alphabet_x10(void)
{
char letter;
int x;
for (x = 0; x < 10; x++)
{
for (letter = 97; letter <= 122; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
}
