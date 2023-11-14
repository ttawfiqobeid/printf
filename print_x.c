#include "main.h"

/**
 * print_hex - prints an hexgecimal number.
 * @val: arguments.
 * Return: counter.
 */

int print_hex(va_list val)
{
	int j;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int mem = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (j = 0; j < counter; j++)
	{
		array[j] = mem % 16;
		mem /= 16;
	}
	for (j = counter - 1; j >= 0; j--)
	{
		if (array[j] > 9)
			array[j] = array[i] + 39;
		_putchar(array[j] + '0');
	}
	free(array);
	return (counter);
}
