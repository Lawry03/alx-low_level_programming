#include "main.h"
#include <stdio.h>

/**
 * print_line - Draws a straight line in ther terminal.
 * @n: Number of int to print.
 * Return: Always 0
 */

void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i = 0;

		while (i < n)
		{
			_putchar('_');
			i++;
		}

		putchar('\n');
	}
}
