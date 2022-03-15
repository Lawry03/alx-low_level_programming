#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabet 10 times followed,
 * by a new line.
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 1; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
			if (c == 'z')
			{
				_putchar('\n');
			}
		}
	}

}
