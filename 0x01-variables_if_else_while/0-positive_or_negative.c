#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints neg or positive int
 * Return: 0 on success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
		printf("%d is positive\n", n);
	return (0);
}
