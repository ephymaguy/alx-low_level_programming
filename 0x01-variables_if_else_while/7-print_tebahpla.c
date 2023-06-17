#include <stdio.h>
/**
 * main - prints alphbets in reverse
 * Return: returns 0 at the end of the loop
 */
int main(void)
{
char x;

for (x = 'z'; x >= 'a'; x--)
{
putchar(x);
}
putchar('\n');
return (0);
}
