#include <stdio.h>
/**
 * main - prints all numbers in base 16
 * Return: returns 0 at the end of the loop
 */
int main(void)
{
int i;

for (i = 0; i <= 15; i++)
{
if (i < 10)
{
putchar(i + '0');
}
else
{
putchar(i - 10 + 'a');
}
}
putchar('\n');
return (0);
}
