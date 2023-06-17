#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - a random value assigned to n, and check if n is positive or nagative
 * Return: returns 0 at the end of check
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n < 0)
	{
		printf("%d is nagative \n", n);
	}
	else
	{
		printf("%d is zero \n", n);
	}	/* your code goes there */
	return (0);
}
