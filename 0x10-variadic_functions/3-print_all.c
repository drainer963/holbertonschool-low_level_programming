#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void car(va_list chr);
void num(va_list dig);
void dub(va_list flt);
void p(va_list chrptr);

void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	va_list list;
	op_t op[] = {
	{"c" , car},
	{"i" , num},
	{"f" , dub},
	{"s" , p},
	};
	va_start(list, format);
	for (; format[i] != '\0'; i++)
	{
		for (; j < 4; j++)
		{
			if (format[i] == *op[j].c)
			{
				op[j].ptr(list);
				printf(" ");
			}
		}
	}
	printf("\n");
	va_end(list);
}
void car(va_list list)
{
	printf("%c", va_arg(list, int));
}
void num(va_list list)
{
	printf("%d", va_arg(list, int));
}
void dub(va_list list)
{
	printf("%f", va_arg(list, double));
}
void p(va_list list)
{
	if (list == NULL)
		printf("(nil)");
	printf("%s", va_arg(list, char *));
}
