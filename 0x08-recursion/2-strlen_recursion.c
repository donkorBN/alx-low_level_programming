#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be checked.
 *
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{
	int longstr = 0;

	if (*s)
	{
		longstr++;
		longstr += _strlen_recursion(s + 1);
	}

	return (longstr);
}
