#include "main.h"
/**
*_strncat - function
*@dest: string
*@src: dest string
*@n: bytes
*Return: value of dest
*/
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    i = 0;
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}
