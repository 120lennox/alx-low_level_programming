#include <stdio.h>
#include "main.h"
/**
 * _isalpha - prints letters
 * @c: int c
 * Return: 0 or 1
*/
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else 
		return (0);
}
