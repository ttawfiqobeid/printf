#include "main.h"
/**
 * printf_string - print a string.
 * @val: argument.
 * Return: the lenght of the sting
 */
int printf_string(va_list val)
{
	char *str;
	int j;
	int lenght;

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
		for (j = 0; j < lenght; j++)
			_putchar(str[j]);
		return (length);
	}
}
