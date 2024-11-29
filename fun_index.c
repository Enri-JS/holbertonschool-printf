#include "header.h"
/**
 * op_select - it selects what it will print depending on the options
 * return: NULL
 */
int (*op_select(const char *next, int var)(va_list))
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
}

