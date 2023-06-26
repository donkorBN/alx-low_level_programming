#include "main.h"

/**
 *swap_int - swaps integers a and b
 *@a: int type
 *@b: int type
 *Return: swapped ints
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
