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
	{
		separator = "";
	}
	va_start(list, n);
	for (i = 1; i < n; i++)
	{
		args = va_arg(list, char *);
			if (args)
			{
				printf("%s%s", args, separator);
			}
			else
			{
				printf("(nil)");
			}
	}
	args = va_arg(list, char *);
	if (args)
	{
		printf("%s\n", args);
	}
	else
	{
		printf("(nil)");
	}
}
