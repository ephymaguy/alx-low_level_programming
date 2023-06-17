#include <stdio.h>
/**
 * main - prints all alphabets in lower case
 * Return: returns zero at the end of the program
 */
int main(void)
{
char x;

for (x = 'a'; x <= 'z'; x++)
{
	if (x != 'e' && x != 'q')
	{
		putchar(x);
	}
}
putchar('\n');
return (0);
}
