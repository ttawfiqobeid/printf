#include "main.h"

/**
 * print_minus_flag - handles the - flag character for non-custom conversion specifiers
 * @val: argument list containing the - flag
 *
 * Return: number of characters printed
 */
int print_minus_flag(va_list val)
{
	int count = 0;
	char minus_flag = va_arg(val, int);

	if (minus_flag == '-')
		count += _putchar('-');
	else
		return (-1); /* Invalid - flag character */

	return (count);
}

