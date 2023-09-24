#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
#include "main.h"

/**
 * print_charac - Helper function (To print a character)
 * @c: The character to be printed
 * Description: program uses the function print_charac
 * Return:A character
 */
void print_charac(char c)
{
putchar(c);
}

/**
 * print_string - Helper function (To print a string)
 * @str: The string to be printed
 * Description: program uses the function print_string
 * Return:A string
 */
void print_string(const char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
}



/**
 * print_integer - Helper function (To print an integer)
 * @c: The character to be printed
 * Description: Program uses the function print_integer
 * Return:An integer
 */
void print_integer(int integ)
{
putchar('0' + integ);
}



/**
 * _printf - The principal function
 * @format: A character string
 * Description: program uses the function _printf
 * Return: The printed character or string
 */
int _printf(const char *format, ...)
{
int printed_charac = 0;

va_list args;
va_start(args, format);

while (*format != '\0')
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
print_charac(va_arg(args, int));
printed_charac++;
break;
case 's':
print_string(va_arg(args, char*));
printed_charac++;
break;
case '%':
print_charac('%');
printed_charac++;
break;
case 'd':
case 'i':
print_integer(va_arg(args, int));
printed_charac++;
break;
default:
break;
}
}
else
{
print_charac(*format);
printed_charac++;
}
format++;
}
va_end(args);
return (printed_charac++);
}
