#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: parameter
 * @b: parameter
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
