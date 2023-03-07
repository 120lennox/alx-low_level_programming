#include <stddef.h>
#include "main.h"
/**
 *_strchr - Function that locates a string
 * @s: pointer for memory area
 * @c: located string/char
 * @s: pointer which searches for a string
 * Return: s s and NULL
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
return (NULL);
}
