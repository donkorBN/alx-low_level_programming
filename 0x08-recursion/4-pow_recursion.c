#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @a: value to raise(base)
 * @b: power
 *
 * Return: result of the operation
 */
int _pow_recursion(int a, int b)
{
	if (b < 0)
		return (-1);
	if (b == 0)
		return (1);
	return (a * _pow_recursion(a, b - 1));
}
