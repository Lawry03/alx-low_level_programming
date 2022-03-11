#include <stdio.h>

/**
 * main -this program prints a - z
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (char c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
		if (c == 'z')
			putchar('\n');
	}
	return (0);
}
