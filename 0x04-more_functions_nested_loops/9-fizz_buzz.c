#include "holberton.h"

/**
 * fizzbuzz - check the code for Holberton School students.
 * @i: int
 *
 * Return: Always 0.
 */
void fizzbuzz(int i)
{
	for (; i < 101;)
	{
		puts(i++ % 5 ? "" : "Buzz");
	}
	printf(i % 3 ? i % 5 ? "%d" : "" : "Fizz", i);
}
