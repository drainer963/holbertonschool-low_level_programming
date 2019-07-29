#include "variadic_functions.h"

/**
 * print_strings - print any amount of strings.
 * @separator: const char
 * @n: unsigned int
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *args;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	if (!separator)
		separator = "";

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		args = va_arg(list, char *);
			if (i != 0)
			{
				printf("%s", separator);
			}
			printf("%s", args);
	}
	va_end(list);
	printf("\n");
}
