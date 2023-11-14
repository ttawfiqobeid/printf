#include "main.h"

/**
 * print_oct - prints an octal number.
 * @val: arguments.
 * Return: counter.
 */

int print_oct(va_list val)
{
	int j;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int mem = num;

	while (num / 8 != 0)
	{
		num /= 8;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (j = 0; j < counter; j++)
	{
		array[j] = mem % 8;
		mem /= 8;
	}
	for (j = counter - 1; j >= 0; j--)
	{
		_putchar(array[j] + '0');
	}
	free(array);
	return (counter);
}
