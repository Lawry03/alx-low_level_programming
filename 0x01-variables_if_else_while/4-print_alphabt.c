#include <stdio.h>
/**
 * main Program prints the alphabet in lowercase
 * excluding e and q followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
			putchar('\0');
		putchar(c);
		if (c == 'z')
			putchar('\n');
	}
	return (0);
}
