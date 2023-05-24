#include <stdio.h>
#include "main.h"
/**
 * print_time - time formatter
 * @hr: hour
 * @min: mins
*/
void print_time(int hr, int min)
{
	_putchar('0' + hr / 10);
	_putchar('0' + hr % 10);
	_putchar(':');
	_putchar('0' + min / 10);
	_putchar('0' + min % 10);
	_putchar('\n');
}
/**
 * jack_bauer - generates the time
*/
void jack_bauer(void)
{
	int hours;
	int mins;
	for (hours = 0; hours < 24; hours++)
	{
		for(mins = 0; mins < 60; mins++)
		{
			print_time(hours, mins);
		}
	}
}
