#include <stdio.h>
/**
 * main - prints numbers 0 to 9 using putchar
 * Return: returns 0 at the end of the loop
 */

int main(void)
{
int i;

for (i = 0; i <= 9; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}

