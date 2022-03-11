#include <stdio.h>
/**
 * main -program prints the aplphabet in lowercase,
 * and then in uppercase followed by a newline.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	char j;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
		if (j == 'Z')
			putchar('\n');
	}
	return (0);
}
