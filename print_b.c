#include "main.h"

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
	if (cont == 0)
	{
		count++;
		_putchar('0');
	}
	return (cont);
}
