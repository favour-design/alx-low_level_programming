#include <stdio.h>

/**
 * main - Print entry
 *
 * Discription: Print the variable types
 *
 * Return: Always  0 (sucessful)
 */


int main(void)
{
	 int a;
	 long int b;
	 long long int c;
	 char d;
	 float f;

	printf("size of an int: %zu bytes(s)\n", (unsigned long)sizeof(a));
	printf("size of a long int: %zu bytes(s)\n", (unsigned long)sizeof(b));
	printf("size of a long long int: %zu bytes(s)\n", (unsigned long)sizeof(c));
	printf("size of a char: %zu bytes(s)\n", (unsigned long)sizeof(d));
	printf("size of a float: %zu bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}

