#include <stdio.h>
#include <math.h>

/**
 * main - prints largest prime number
 * Return: returns 0
 */

int main(void)
{
long i, maxf;
long num = 612852475143;
double square = sqrt(num);

for (i = 1; i <= square; i++)
{
if (num % i == 0)
{
maxf = num / i;
}
}
printf("%ld\n", maxf);
return (0);
}
