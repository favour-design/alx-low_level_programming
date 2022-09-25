
#include <stdio.h>

/**
 * main - Entry point
 *
 * Discription: backwards letters
 *
 * Return: always (successful)
 */

int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar (n);
	}

	putchar ('\n');
	return (0);



}

