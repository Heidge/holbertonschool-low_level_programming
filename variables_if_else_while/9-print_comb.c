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
int x = '0';
while (x <= '9')
{
putchar(x);
if (x <= '8')
{
putchar(',');
}
if (x <= '8')
{
putchar(' ');
}
x++;
}
putchar('\n');
return (0);
}
