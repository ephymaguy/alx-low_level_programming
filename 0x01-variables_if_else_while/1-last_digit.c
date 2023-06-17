#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - printif the last digit of n is less than 6, greater than 5 or =0
 * Return: returns 0 at the end of the program
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int ld = n % 10;

	if (ld > 5)
	{
	printf("Last digit of %d is %d  and is greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, ld);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}	/* your code goes there */
	return (0);
}
