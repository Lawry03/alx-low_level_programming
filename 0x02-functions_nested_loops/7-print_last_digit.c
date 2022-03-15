#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @i: input integer
 * Return: Last digit
 */
int print_last_digit(int i)
{
	int last_digit;

	if (i >= 0)
	{
		last_digit = i % 10;
	}
	else
	{
		last_digit = (i * -1) % 10;
	}
	return (last_digit);
}
