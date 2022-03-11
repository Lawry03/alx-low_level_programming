#include <stdio.h>
/**
 * main -program prints all possible different
 * combinations of two digits.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (i != j && j > i)
			{
				putchar(i);
				putchar(j);
				if (j < 57 || i < 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
