#include "variadic_functions.h"
#include <stdarg.h>
/**
 * p_char - prints char.
 *
 * @list: va list member
 * Return: Always 0.
 */
void p_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * p_num - print number.
 * @list: valist
 * Return: Always 0.
 */
void p_num(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * p_dub - print double.
 * @list: valist
 * Return: Always 0.
 */
void p_dub(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * p_str - print string.
 * @list: valist
 * Return: Always 0.
 */
void p_str(va_list list)
{
	char *str = va_arg(list, char *);

	if (!str)
		printf("(nil)");
	printf("%s", str);
}
/**
 * print_all - print it alll.
 * @format: const char pointer
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	char *sep = "";
	int i = 0, j = 0;
	va_list list;

	op_t op[] = {
		{"c", p_char},
		{"i", p_num},
		{"f", p_dub},
		{"s", p_str},
		{NULL, NULL}
	};

	va_start(list, format);

	while (format && format[i])
	{
		while (op[j].ch)
		{
			if (*op[j].ch == format[i])
			{
				printf("%s", sep);
				op[j].ptr(list);
				sep = ", ";
			}
			++j;
		}
		j = 0;
		++i;
	}
	printf("\n");
	va_end(list);
}
