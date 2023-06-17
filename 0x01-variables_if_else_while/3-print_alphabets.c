#include <stdio.h>

/**
 * main - prints all alphabets in lower case
 * Return: returns zero at the end of the program
 */
int main(void)
{
	char x;
	char X;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (X = 'A'; X <= 'Z'; X++)
	{
	putchar(X);
	}
	putchar('\n');
	return (0);
}
