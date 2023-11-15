#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

#define BUFF_SIZE 1024

/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 */
typedef struct format
{
    char *ph;
    int (*function)();
} convert;

int printf_char(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);
int printf_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int print_37(void);
int print_int(va_list args);
int print_dec(va_list args);
int print_bin(va_list val);
int print_HEX(va_list val);
int print_unsigned(va_list args);
int print_oct(va_list val);
int print_hex(va_list val);
int print_HEX_string(unsigned int num);
int print_String(va_list val);
int print_p(va_list val);
int print_c(va_list val);
int print_ptr(unsigned long int num);
int _printf(const char * const format, ...);
#endif

