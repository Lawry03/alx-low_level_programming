#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the first 50 fibonacci numbers.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long int sum = 3;
	unsigned long int firstN = 1;
	unsigned long int secondN = 2;

	for (i = 1; i <= 50; i++)
	{
		if (i <= 2)
		{
			printf("%d, ", i);
		}
		else
		{
			if (i <= 49)
			{
				printf("%lu, ", sum);
				firstN = secondN;
				secondN = sum;
				sum = firstN + secondN;
			}
			else
			{
				printf("%lu\n", sum);
			}

		}
	}
	return (0);
}
