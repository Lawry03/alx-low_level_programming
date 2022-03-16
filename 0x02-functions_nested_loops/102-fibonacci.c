#include <stdio.h>

/**
 * main - Prints the first 50 fibonacci numbers.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int sum = 3;
	int firstN = 1;
	int secondN = 2;

	for (i = 1; i <= 50; i++)
	{
		if (i <= 2)
		{
			printf("%d, ", i);
		}
		else
		{
			printf("%d, ", sum);
			firstN = secondN;
			secondN = sum;
			sum = firstN + secondN;

		}
	}
	return (0);
}
