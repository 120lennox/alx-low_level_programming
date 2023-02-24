#include <stdio.h>
/**
 *_isupper - checks if character is uppercase
 *@c: has the letter
 *Return: 1 if character is upper otherwise 0
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
return (0);
}
