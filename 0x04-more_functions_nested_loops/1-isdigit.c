#include "main.h"
/**
* _isdigt- checks if c is 0 to 9 digit
* @c: is a character to be checked
* * Return: returns 0 or 1
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
