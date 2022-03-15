#include <stdio.h>
#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @i: input integer
 * Return: absolute value
 */
int _abs(int i)
{
	if (i > 0)
	{
		i = i * 1;
	}
	else if (i == 0)
	{
		i = 0;
	}
	else
	{
		i = i * -1;
	}
	return (i);
}
