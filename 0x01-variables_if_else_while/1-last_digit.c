#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -determines the last digit of a randomly genarated number and if
 * the digit is greater than 5, equal to 0 or less than 6 and not 0.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lst_dgit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lst_dgit = n % 10;
	if (lst_dgit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lst_dgit);
	else if (lst_dgit == 0)
		printf("Last digit of %d is %d and is 0\n", n, lst_dgit);
	else if (lst_dgit < 6 && lst_dgit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lst_dgit);
	return (0);
}
