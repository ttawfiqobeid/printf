#include "main.h"

/**
 * print_length_modifiers - handles l and h length modifiers
 * @val: argument list containing the length modifier
 *
 * Return: number of characters printed
 */
int print_length_modifiers(va_list val)
{
	int count = 0;
	char modifier = va_arg(val, int);

	if (modifier == 'l')
		count += _putchar('l');
	else if (modifier == 'h')
		count += _putchar('h');
	else
		return (-1); /* Invalid length modifier */

	return (count);
}

