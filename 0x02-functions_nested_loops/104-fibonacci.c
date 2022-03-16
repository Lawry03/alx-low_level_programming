#include <stdio.h>

/**
 * main - Prints first 98 Fibonnacci numbers,
 * followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int i, firstNum, secondNum, j1, j2, k1, k2;

	firstNum = 1;
	secondNum = 2;

	printf("%lu", firstNum);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", secondNum);
		secondNum = secondNum + firstNum;
		firstNum = secondNum - firstNum;
	}

	j1 = firstNum / 1000000000;
	j2 = firstNum % 1000000000;
	k1 = secondNum / 1000000000;
	k2 = secondNum % 1000000000;

	for (i = 92; i < 99; i++)
	{
		printf(", %lu", k1 + (k2 / 1000000000));
		printf("%lu", (k2 % 1000000000));
		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j2;
		j2 = k2 - j2;
	}
	printf("\n");

	return (0);
}
