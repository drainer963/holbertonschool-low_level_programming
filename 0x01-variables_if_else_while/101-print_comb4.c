#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, l;

	for (l = '0'; l <= '9'; l++)
	{
		for (i = l + 1; i <= '9'; i++)
		{
			for (j = i + 1; j <= '9'; j++)
			{
				putchar(l);
				putchar(i);
				putchar(j);
				if (l != '7' || i != '8' || j != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
		putchar('\n');
		return (0);
}
