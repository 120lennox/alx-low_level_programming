#include "main.h"
/**
 * _strcpy - copies a string
 * @dest: destination of text to be copied
 * @src: source of copied file
 *Return: destination of file
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
