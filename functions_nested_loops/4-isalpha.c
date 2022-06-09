#include "main.h"
/**
* _isalpha - check uppercase or lowercase
*@c: character checked
*Return: 1 if is a letter lowercase, 0 otherwise
*/
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
