#include "main.h"

/**
 * _strlen - Returns the lenght of  astring
 * @str: String pointer
 * Return: j
 */

int _strlen(char *str)
{
	int j;

	for (j = 0; str[j] != 0; j++)
		;

		return (j);
}
/**
 * _strlenc - strlen function but applied for const char ponter str
 * @str: char pointer
 * Return: j
 */

int _strlenc(const char *str)
{
	int j;

	for (j = 0; str[j] != 0; j++)
		;
		return (j);
}
