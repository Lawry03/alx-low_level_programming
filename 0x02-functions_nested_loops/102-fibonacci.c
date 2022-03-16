#include <stdio.h>

/**
 * main - Prints the first 50 fibonacci numbers.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number, i;

	for (i = 1; i <= 50; i++)
	{
		if (i <= 2)
		{
			printf("%d, ", i);
		}
		else
		{
			number = (i - 1) + (i - 2);
			printf("%d, ", number);
		}
	}
	return (0);
}
