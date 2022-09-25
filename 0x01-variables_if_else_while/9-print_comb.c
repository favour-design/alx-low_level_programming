
#include <stdio.h>

/**
 * main - Entery point
 *
 * Discription: print combo
 *
 * Return: Always (successful)
 */

int main(void)
{
	int h;

	for (h = '0'; h <= '9'; h++)
	{
		putchar (h);
	}
	if (h != '9')
	{
		putchar (' , ');

		putchar (' ');
	}
	putchar ('\n');

	return (0);
}



