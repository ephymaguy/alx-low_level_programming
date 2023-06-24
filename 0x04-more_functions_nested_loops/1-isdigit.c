#include "main.h"
/**
* _isdigit- checks if c is 0 to 9 digit
* @c: is a character to be checked
* * Return: returns 0 or 1
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
