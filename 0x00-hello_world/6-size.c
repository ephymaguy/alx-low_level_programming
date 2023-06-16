#include <stdio.h>
/**
 * main - a program that prints the size of various types
 * Return: returns a value 0
 */
int main(void)
{
	printf("the size of an int is: %lu. \n", (unsigned long)sizeof(int));
	printf("the size of n double is: %lu. \n", (unsigned long)sizeof(double));
	printf("the size of an char is: %lu. \n", (unsigned long)sizeof(char));
	return (0);
}
