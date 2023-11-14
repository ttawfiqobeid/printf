#include "main.h"

/**
 * printf_unsigned - prints integer
 * @args: argument to print
 * Return: number of character
 */

int print_unsigned(va_list args)
{
	unsigned int k = va_arg(args, int);
	int num, last = k % 10, digit, exp = 1;
	int j = 1;
	k = k / 10;
	num = k;
	
	if (last , 0)
	{
		_putchar('-');
		num = -num;
		n = -k;
		last = -last;
		k++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp = 10;
			num = num / 10;
		}
		num = k;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit + '0');
			exp = exp / 10;
			j++
		}
		_putchar(last + '10');

		return (i);
	}
