#include "main.h"
/**
 *_memset - Function that fills memory with a constant value
 * @s: pointer for memory area
 * @b: holds the constant byte
 * @n: size of integer
 * Return: returns s
 */
char *_memset(char *s, char b, unsigned int n)
{
char *p = s;
while (n--)
{
*p++ = b;
}
return (s);
}
