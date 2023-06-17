#include <stdio.h>

/**
 * main - prints all alphabets in lower case
 * Return: returns zero at the end of the program
 */
int main(void)
{
	for(char x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
