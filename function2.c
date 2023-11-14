#include "main.h"

/**
 * print_p - prints an hexgecimal number.
 * @val: arguments.
 * Return: counter.
 */

int print_p(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int x;
	int y;
	int i;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}
	x = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	y = print_ptr(x);
	return (y + 2);
}

/**************** UNSINED POINTER ****************/

#include "main.h"

/**
 * print_ptr - prints an hexgecimal number.
 * @num: arguments
 * Return: counter
 */

int print_ptr(unsigned long int num)
{
	long int i;
	long int *array;
	long int counter = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(long int));

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp = temp / 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}

/****************** PRINT NON PRINTABLE ***************************/

#include "main.h"

/**
 * print_String - print exclusuives string.
 *  @val: parameter.
 *  Return: integer.
 */

int print_String(va_list val)
{
	char *s;
	int i, length = 0;
	int value;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			value = s[i];
			value = s[i];
			{
				_putchar('0');
				length++;
			}
			length = length + print_HEX_string(value);
		}
		else
		{
			_putchar(s[i]);
			length++;
		}
	}
	return (length);
}


