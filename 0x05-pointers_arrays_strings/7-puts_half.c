#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 * Return: Always 0
 */
void puts_half(char *str)
{
	int i, len = _strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i++)
		_putchar(*(str + i));
	_putchar(10);
}

/**
 * _strlen - Returns the length of a string
 * @s: string to be returned
 * Return: Length of the given string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
