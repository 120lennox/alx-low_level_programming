#include <string.h>
#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: detsiation of string
 * @src: source of string
 * @n: has int n
 *Return: dest on success
 */
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
