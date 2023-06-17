#include <stdio.h>
/**
 * main - prints smallest combination
 * Return: returns 0 at the end of the loop
 */
int main(void)
{
int i, x;

for (i = '0'; i <= '8'; i++)
{
for (x = '1'; x <= '9'; x++)
{
if (x > i)
{
putchar(i);
putchar(x);
if (i != '8' || x != '9')
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
