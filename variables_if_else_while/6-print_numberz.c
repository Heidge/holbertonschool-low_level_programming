#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char ch = '0';
while (ch <= '9')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
