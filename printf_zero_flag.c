#include "main.h"

/**
 * print_zero_flag - handles the 0 flag character for non-custom conversion specifiers
 * @val: argument list containing the 0 flag
 *
 * Return: number of characters printed
 */
int print_zero_flag(va_list val)
{
	int count = 0;
	char zero_flag = va_arg(val, int);

	if (zero_flag == '0')
		count += _putchar('0');
	else
		return (-1); /* Invalid 0 flag character */

	return (count);
}

