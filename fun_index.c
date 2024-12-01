#include "header.h"
/**
 * op_select - Selects the appropriate function to print
 * based on the provided format specifier.
 * @next: A string containing the format specifiers.
 * @var: The index in the string `next`that specifies which character to match.
 *
 * Return: A pointer to the function that matches the format specifier
 * (a function that takes a va_list). If no match is found, returns NULL.
 */
int (*op_select(const char *next, int var))(va_list)
{
	int i;
	op_t ops[] = {
		{"s", op_string},
		{"c", op_char},
		{"i", op_number},
		{"d", op_number},
		{"u", op_unsigned},
		{"r", op_reverse},
		{NULL, NULL},
	};
	for (i = 0; ops[i].match; i++)
		if (ops[i].match[0] == next[var])
			return (ops[i].func);

	return (NULL);
