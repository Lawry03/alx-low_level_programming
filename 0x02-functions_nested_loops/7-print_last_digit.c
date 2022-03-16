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

	if (i > 0)
	{
		last_digit = i % 10;
		_putchar(last_digit);
	}
	else if (i == 0)
	{
		last_digit = i * 0;
		_putchar(last_digit);
	}
	else
	{
		last_digit = (i % 10) * -1;
		_putchar(last_digit);
	}
	return (last_digit);
}
