#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Discription : Using putchar only
 *
 * Return: Always (successful)
 */

int main(void)
{
	int n;
	char zh = 'a';

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	while (zh < 'z')
	
		putchar(zh);
		++zh;
	
	putchar ('\n');
	return (0);
}

