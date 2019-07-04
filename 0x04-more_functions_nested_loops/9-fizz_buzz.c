#include "holberton.h"

/**
 * fizzbuzz - check the code for Holberton School students.
 * @i: int
 *
 * Return: Always 0.
 */
void fizzbuzz(int i)
{
	while (i < 101)
	{
		if (i % 15 == 0)
			printf(" FizzBuzz ");
		else if (i % 3 == 0)
			printf(" Fizz ");
		else if (i % 5 == 0)
			printf(" Buzz ");
		else
			printf("%d ", i);
		i++;
	}
}
