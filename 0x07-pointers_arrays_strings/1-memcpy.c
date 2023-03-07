#include "main.h"
/**
 *_memcpy - Function that fills memory with a constant value
 * @dest: pointer for destination for copied item
 * @src: original item
 * @n: size of integer
 * Return: destination of copied file
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *p = dest;
while (n--)
{
*p++ = *src++;
}
return (dest);
}
