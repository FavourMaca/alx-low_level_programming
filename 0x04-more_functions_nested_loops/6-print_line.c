#include "main.h"

/**
 * print_line - draws a straight line in a terminal
 * @n: parameter
 * Return: nothing
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
