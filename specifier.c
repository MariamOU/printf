#include "main.h"

/**
 * get_specifier - finds the format function
 * @s: the string format
 * Return: number of bytes printed
*/
int (*get_specifier(char *s))(va_list args, params_t *params)
{
	specifier_t specifiers[] = {
		{"c", print_char},
		{"d", print_int},
		{"s", print_string},
		{"%", print_percent},
		{"u", print_unsigned},
		{"x", print_hex},
		{"b", print_binary},
		{"X", print_HEX},
		{"o", print_octal},
		{"S", print_S},
		{"p", print_address},
		{NULL, NULL},

	};

	int i;

	while (specifiers[i].specifier)
	{
		if (*s == specifiers[i]).specifier[0])
		{
			return (specifiers[i].f)
		}

		i++;
	}
	return (NULL);
}
