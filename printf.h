#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

typedef struct op_match
{
char *match;
int (*func)(va_list);
} op_t;

int _printf(const char *format, …);
int _putchar(char c);
Int (*op_select(const char *next, int var))(va_list);
int op_char(va_list c);
int op_string(va_list s);
int op_unsigned(va_list i);
int op_unsigned(va_list u);
int op_reverse(va_list r);

#endif /* MAIN_H */
