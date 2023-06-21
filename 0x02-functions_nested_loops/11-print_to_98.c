#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print from any given number to 98.
 * @n: is the input int.
 */
void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
{
printf("%d, ", n);
}
printf("\n");
}

else if (n >= 98)
{
for (; n >= 98; n--)
{
printf("%d, ", n);
}
printf("\n");
}
}
