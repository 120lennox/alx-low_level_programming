#include "main.h"
#include <stdio.h>
/**
 *_abs - returns absolute value
 *@abs_num: takes abs
 *Return: 0 on success
 */
int _abs(int abs_num)
{
if (abs_num < 0)
{
return (-abs_num);
}
else
{
return (abs_num);
}
}
