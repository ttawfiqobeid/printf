#include "main.h"

/**
 * print_field_width - handles field width for non-custom conversion specifiers
 * @val: argument list containing the field width
 *
 * Return: number of characters printed
 */
int print_field_width(va_list val)
{
    int count = 0;
    int width = va_arg(val, int);

    /* Example: Print a string with field width */
    char *content = "Hello";
    int content_length = strlen(content);

    if (width > content_length) {
        /* Pad with spaces on the left to meet the width */
        int padding = width - content_length;
        for (int i = 0; i < padding; i++) {
            _putchar(' ');
            count++;
        }
    }

    /* Print the actual content */
    for (int i = 0; i < content_length; i++) {
        _putchar(content[i]);
        count++;
    }

    return (count);
}

