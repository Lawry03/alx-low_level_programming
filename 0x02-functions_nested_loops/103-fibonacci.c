#include <stdio.h>
#include <stdlib.h>

/**
 * main - Computes and prints the sum of the even valued terms
 * in the fibonacci series.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long int firstNum, secondNum, next, sum;

	firstNum = 1;
	secondNum = 2;
	sum = 0;

	for (i = 1; i <= 33; i++)
	{
		if (firstNum < 4000000 && (firstNum % 2) == 0)
		{
			sum = sum + firstNum;
		}
		next = firstNum + secondNum;
		firstNum = secondNum;
		secondNum = next;
	}
	printf("%lu\n", sum);
	return (0);
}
