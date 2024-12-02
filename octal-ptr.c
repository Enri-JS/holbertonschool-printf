#include "main.h"
/**
 * op_octal - prints octal
 * @list: subject for printing
 * Return: length of printed
 */
int op_octal(va_list list)
{
	char *ptr;
	int size;

	ptr = itoa(va_arg(list, unsigned int), 8);

	size = print((ptr != NULL) ? ptr : "NULL");

	return (size);
}
/**
 * op_pointer - prints an address
 * @list: subject whose address will be printed
 * Return: length of the printed
 */
int op_pointer(va_list list)
{
	char *ptr;
	int size;

	ptr = itoa(va_arg(list, unsigned long int), 16);

	if (!_strcmp(ptr, "0"))
		return (print("(nil)"));

	size = print("0x");

	if (!_strcmp(ptr, "-1"))
		size += print("ffffffffffffffff");
	else
		size += print(ptr);

	return (size);
}
