#include <stdio.h>

/**
 * main - computes sum of all the multiples of 3 or 5 below 1024.
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long int sum;
	int i;

	sum = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			sum = sum + i;
		}
		else if ((i % 5) == 0)
		{
			sum = sum + i;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
