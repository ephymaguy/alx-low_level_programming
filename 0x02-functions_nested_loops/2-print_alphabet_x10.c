#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10 times
 */
void print_alphabet_x10(void)
{
char alphabets;
int x;

for (x = 0; x < 10; x++)
{
for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
{
_putchar(alphabets);
}
_putchar('\n');
}
}
