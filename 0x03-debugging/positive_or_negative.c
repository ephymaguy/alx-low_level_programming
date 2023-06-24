#include "main.h"

/* more headers goes there */

/**
* positive_or_negative - a check if  is positive or nagative
* Return: returns 0 at the end of check
* @i: i is the new input
*/

/* betty style doc for function main goes there */
void positive_or_negative(int i)
{
if (i > 0)
{
	printf("%d is positive\n", i);
}
else if (i < 0)
{
	printf("%d is negative\n", i);
}
else
{
	printf("%d is zero\n", i);
}       /* your code goes there */
}
