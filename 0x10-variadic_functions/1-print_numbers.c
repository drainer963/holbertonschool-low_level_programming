#include "variadic_functions.h"

/**
 * print_numbers- check the code for Holberton School students.
 * @separator: const char
 * @n: u int
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int args;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		args = va_arg(list, int);
		if (separator == NULL)
			separator == "";
		if (i != 0)
		{
			printf("%s", separator);
		}
		printf("%d", args);
	}
	va_end(list);
	printf("\n");
}
