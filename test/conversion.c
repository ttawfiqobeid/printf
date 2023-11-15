#include "main.h"

/**
 * print_unsigned - prints integer
 * @args: argument to print
 * Return: number of character
 */

int print_unsigned(va_list args)
{
	unsigned int k = va_arg(args, unsigned int);
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
		k++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
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

/********************* UNSIGNED IN HEXADECIMAL *******/


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
			array[j] = array[j] + 39;
		_putchar(array[j] + '0');
	}
	free(array);
	return (counter);
}

/********* UPPER HEXADECIMAL **********/


#include "main.h"

/**
 * print_HEX - prints an hexgecimal number.
 * @val: arguments.
 * Return: counter.
 */

int print_HEX(va_list val)
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
			array[j] = array[j] + 7;
		_putchar(array[j] + '0');
	}
	free(array);
	return (counter);
}

/****************** OCTAL *******************/


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

/******************* HEXADECIMAL EXTRA PRINT ******************/


#include "main.h"

/**
 * print_HEX_extra - prints an hexgecimal number.
 * @num: number to print.
 * Return: counter.
 */

int print_HEX_string(unsigned int num)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = tem % 16;
		tem /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
