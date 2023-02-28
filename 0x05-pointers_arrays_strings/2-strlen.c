#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strlen - counts number of a char in a string
 * @s: pointer
 * @length: counts number of string
 *Return: length of str
 */
int _strlen(char *s)
{
int length = 0;
while (*s != 0)
{
length++;
s++;
}
return (length);
}
