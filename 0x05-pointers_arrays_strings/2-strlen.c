#include "main.h"

/**
 *_strlen - length of a string
 *@s: int type
 *Return: length of a string
 */

int _strlen(char *s)
{
	int leng = 0;

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	return (leng);
}
