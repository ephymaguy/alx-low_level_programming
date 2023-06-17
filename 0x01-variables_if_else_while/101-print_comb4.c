#include <stdio.h>
/**
 * main - prints all possible combination of 3 digits
 * Return: returns 0 at the end of the loop
 */
int main(void)
{
int i, x, z;

for (i = '0'; i <= '7'; i++)
{
for (x = '1'; x <= '8'; x++)
{
for (z = '2'; z <= '9'; z++)
{
if (x > i && z > x)
{
putchar(i);
putchar(x);
putchar(z);
if (i != '7' || x != '8' || z != '9')
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
