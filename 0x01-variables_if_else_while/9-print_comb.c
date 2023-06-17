#include <stdio.h>
/**
 * main - prints all numbers in base 16
 * Return: returns 0 at the end of the loop
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
