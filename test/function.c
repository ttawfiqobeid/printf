/********* PRINT A CHAR *********************/
#include "main.h"

/**
 * print_c - prints a character.
 * @val: arguments.
 * Return: integer.
 */

int print_c(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}

/******************* PRINT A STRING ************/
/**
 * printf_string - print a string.
 * @val: argument.
 * Return: the length of the sting
 */
int printf_string(va_list val)
{
	char *str;
	int j;
	int length;

	str = va_arg(val, char*);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (j = 0; j < length; j++)
		_putchar(str[j]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (j = 0; j < length; j++)
			_putchar(str[j]);
		return (length);
	}
}

/****************** PERCENT SIGN *******************/

/**
 * print_37 - prints the char %.
 * Return: 1.
 */

int print_37(void)
{
	_putchar(37);
	return (1);
}

/******************** PRINT INT *****************/

#include "main.h"

/**
 * print_int - prints integer
 * @args: argument to print
 * @print_int: to print interger value
 *
 * Return: number of character to print
 */

int print_int(va_list args)
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
		}
	}
	_putchar(last + '0');
	return (j);
}


/**
 * print_dec - prints decimal
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

/******** BINARY ************************************/

/**
 * print_bin - prints binary number.
 * @val: parameter.
 * Return: integer
 */

int print_bin(va_list val)
{
	int flag = 0;
	int count = 0;
	int j, b = 1, c;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (j = 0; j < 32; j++)
	{
		p = ((b << (31 - j)) & num);
		if (p >> (31 - j))
			flag = 1;
		if (flag)
		{
			c = p >> (31 - j);
			_putchar(c + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
