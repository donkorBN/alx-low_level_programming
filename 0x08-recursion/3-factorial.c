#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to return the factorial from
 *
 * Return: factorial of n
 */
int factorial(int a)
{
	if (a < 0)
		return (-1);
	if (a == 0)
		return (1);
	return (a * factorial(a - 1));
}
