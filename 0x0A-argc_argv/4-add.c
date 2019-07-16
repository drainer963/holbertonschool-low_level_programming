#include "holberton.h"
#include <ctype.h>
/**
 * main - it all starts here
 * @argc: the number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *v;

	while (--argc)
	{
		for (v = argv[argc]; *v; v++)
			if (!isdigit(*v))
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
