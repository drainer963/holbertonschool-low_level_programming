#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char n, m;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	for (m = 'A'; m <= 'Z'; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
