#include <stdio.h>
#include "main.h"
/**
 * _isalpha - Checks for alphabetic characters
 * @c: is the character to be checked
 * Return: 1 if character is lower or uppercase eotherwis 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c = <= 'Z'));
}
