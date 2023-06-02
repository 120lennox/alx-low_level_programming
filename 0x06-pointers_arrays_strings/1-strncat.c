#include "main.h"
#include<string.h>

/**
 **_strncat - joins string dest and src
 *
 * @dest: destination of the string
 * @src: source of the string
 * @n: cutoff int
 * Return: char
*/

char *_strncat(char *dest, char *src, int n)
{

size_t dest_length = strlen(dest);
int i;

for (i = 0; i < (n) && src[i] != '\0'; i++)
{
dest[dest_length + i] = src[i];
}
dest[dest_length + i] = '\0';

return (dest);

}
