
#include <stdio.h>

/**
 * main - Enyry point
 *
 * Discription:  print base i6
 *
 * Return: always (successful)
 */

int main(void)
{
	int z;

	for (z = '0'; z <= '9'; z++)
	{
		putchar (z);
	}

	for (z = 'a'; z <= 'f'; z++)
	{
		putchar (z);
	}

	putchar ('\n');
	return (0);

}


