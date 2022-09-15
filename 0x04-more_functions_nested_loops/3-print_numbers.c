#include "main.h"

/**
 * print_numbers - writes a function that prints the numbers from 0 to 9
 * *0 to 9
 *
 * Return: result
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		_putchar(n);
	}
	_putchar(10);
}
