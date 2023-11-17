#include "main.h"

/**
 * print_plus_space_hash - handles +, space, and # flag characters
 * @val: argument list containing the flag character
 *
 * Return: number of characters printed
 */
int print_plus_space_hash(va_list val)
{
	int count = 0;
	char flag = va_arg(val, int);

	if (flag == '+')
		count += _putchar('+');
	else if (flag == ' ')
		count += _putchar(' ');
	else if (flag == '#')
		count += _putchar('#');
	else
		return (-1); /* Invalid flag character */

	return (count);
}

