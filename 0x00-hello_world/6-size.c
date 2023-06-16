#include <stdio.h>
/**
 * main - a program that prints the size of various types
 * Return: returns a value 0
 */
int main(void)
{
	printf("Size of a char is: %lu bytes(s) \n", (unsigned long)sizeof(char));
	printf("Size of a int is: %lu bytes(s) \n", (unsigned long)sizeof(int));
	printf("Size of a long int is: %lu bytes(s) \n", (unsigned long)sizeof(long int));
	printf("Size of a long long int is: %lu bytes(s) \n", (unsigned long)sizeof(long long int));
	printf("Size of a float is: %lu bytes(s) \n", (unsigned long)sizeof(float));
	return (0);
}
