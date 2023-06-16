#include <stdio.h>
/**
 * main - a program that prints the size of various types
 * Return: returns a value 0
 */
int main(void)
{
char ch;
int i;
long int li;
long long int l;
float fl;
printf("Size of a char is: %lu bytes(s) \n", (unsigned long)sizeof(ch));
printf("Size of a int is: %lu bytes(s) \n", (unsigned long)sizeof(i));
printf("Size of a long int is: %lu bytes(s)\n", (unsigned long)sizeof(li));
printf("Size of a long long int is: %lubytes(s)\n", (unsigned long)sizeof(l));
printf("Size of a float is: %lu bytes(s)\n", (unsigned long)sizeof(fl));
return (0);
}
