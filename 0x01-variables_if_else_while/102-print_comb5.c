#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = 0; a <= 99; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			int na = (a / 10) + '0';
			int nb = (a % 10) + '0';
			int nc = (b / 10) + '0';
			int nd = (b % 10) + '0';

			putchar(na);
			putchar(nb);
			putchar(' ');
			putchar(nc);
			putchar (nd);

			if (na != '9' || nb != '8' || nc != '9' || nd != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
