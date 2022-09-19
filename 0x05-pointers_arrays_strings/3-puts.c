#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string to stdout
 * @str: print this string
 * Return: Always 0
 */
void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);

	_putchar('\n');
}
