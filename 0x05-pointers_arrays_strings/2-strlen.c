#include "main.h"
/**
* _strlen - returns the length of a string
* @i: string
* Return: length
*/
int _strlen(char *i)
{
int lenght = 0;

while (*i != '\0')
{
	lenght++;
	i++;
}

return (lenght);
}
