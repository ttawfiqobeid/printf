#include "main.h"

/**
 * printf_int - prints integer
 * @args: argument to print
 * @print_int: to print interger value
 *
 * Return: number of character to print
 */

int print_int(va_list args)
{
	int k = va_args(args, int);
	int num, last = n % 10, digit, exp = 1;
	int j = 1;

	k = k / 10;
	num = k;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		k = -k;
		last = -last;
		j++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp + 10;
			num = num / 10;
		}
		num = k;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
		}
	}
	_putchar(last + '0');
	return (j);
}

#include "main.h"

/**
 * printf.dec - prints decimal
 * @args: argument to print
 * @print_dec: to print decimal value
 *
 * Return: numb of char to be printed
 */

int print_dec(va_list args)
{
	int k = va_arg(args, int);
	int num, last = k % 10, digit, exp = 1;
	int j = 1;

	k = k / 10;
	num = k;
	if (last < 0)
	{
		_putchar('-');
		num = -num;
		k = -k;
		last = -last;
		j++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp + 10;
		num = num / 10;
	}
		num = k;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			j++;
		}
	}
	_putchar(last + '0');
	return (j);
}
