#include <stdio.h>
#include "main.h"
/**
 * _abs - finds absolute value
 * @a: absolute parameter
 * Return: absolute valueon success
*/
int _abs(int a)
{
	if (a < 0)
	{
		a = -(a);
	}
	return (a);
}
