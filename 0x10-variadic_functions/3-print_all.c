#include "variadic_functions.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void car(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void num(va_list list)
{
        printf("%d", va_arg(list, int));
}
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void dub(va_list list)
{
       printf("%f", va_arg(list, double));
}
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void p(va_list list)
{
        if ( list == NULL)
                printf("(nil)");
        printf("%s", va_arg(list, char *));
}
/**
 * get_op_func - convert symbol into function
 * @s: string which may correspoind to function
 *
 * Return: function associated with s
 */
void op_char_ptr(va_list list)
{
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	char *sep = "";
	int i, j = 0;

	va_list list;

	op_t op[] = {
		{"c", car},
		{"i", num},
		{"f", dub},
		{"s", p},
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
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
	va_end(list);
}
