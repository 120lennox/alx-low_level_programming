#include "main.h"
/**
 *jack_bauer - prints 24hrs times
 */
void jack_bauer(void)
{
int hours, minutes;
for (hours = 0; hours < 24; hours++)
{
for (minutes = 0; minutes < 60; minutes++)
{
_putchar(hours);
_putchar(':');
_putchar(minutes);
_putchar('\n');
}
}
