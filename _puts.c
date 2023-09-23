#include "main.h"

/**
 * _puts - print a string with newline
 * @str: the string to be printed
 * Return: nothing
 */

int _puts(char *str)
{
	char *a = str;

	while (*str)
	{
		_putchar(*str++);
	}
	return (str - a);
}

/**
 * _putchar - write  chracter to the stdout
 * @c: the string to be printed
 * Return: 1 or -1
*/

int _putchar(int c)
{
	int i;
	char buf[OUTPUT_BUF_SIZE];

	if (c == BUF_FLUSH || i >= OUTPUT_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;

	}
	if (c != BUF_FLUSH)
	{
		buf[i++] = c;
	}
	return (1);
}
