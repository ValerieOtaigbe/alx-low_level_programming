#include "main.h"

/**
 * check the code for digit
 *
 * Return: always 0
 *
 */
int _isdigit(int)
{
	int c;
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
