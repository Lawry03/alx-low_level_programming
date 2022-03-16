#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98,
 * followed by a new line.
 * @i: Number to start counting from.
 */

void print_to_98(int i)
{
	int a, b;

	if (i <= 98)
	{
		for (a = i; a <= 98; a++)
		{
			if (a != 98)
			{
				printf("%d, ", a);
			}
			else if (a == 98)
			{
				printf("%d\n", a);
			}
		}
	}
	else
	{
		for (b = i; b >= 98; b--)
		{
			if (b != 98)
			{
				printf("%d, ", b);
			}
			else if (b == 98)
			{
				printf("%d\n", b);
			}
		}
	}
}
