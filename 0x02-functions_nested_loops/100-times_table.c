#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Prints times tables of numbers between 0 and 15.
 * @n: Input number.
 */

void print_times_table(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j < n)
				{
					if (n < 10)
					{
						printf("%d,   ", i * j);
					}
					else
					{
						printf("%d,  ", i * j);
					}
				}
				else
				{
					printf("%d\n", i * j);
				}
			}
		}
	}
}
