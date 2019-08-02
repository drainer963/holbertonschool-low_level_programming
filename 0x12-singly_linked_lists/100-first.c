#include "lists.h"


void p_first(void)__attribute__ ((constructor));
/**
 * p_first - exec code before main function
 *
 *
 * Return: void
 */
void p_first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon m");
	printf("y back!\n");
}
