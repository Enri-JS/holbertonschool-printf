Project "_printf" README file

Members:

 1- Daniel

 2- Jose

 3- Willie

 Purpose: this is a custom implemntation of the printf function. It handles format specifiers and formated strings. The function can print texts, numbers, or any type of data depending on the format specifier.

 Examples of format specifiers are %s for strings, %c for characters, %i for a number and  %u for unsif=gned interger.

 Parameters:It searchers for a format and pritns string depndign on its specifer. format (const char *) with speciiers startign with %. if no format specifiers are foudn it prints the string as is.

 Returns: returns the length of the string, except for the null terminator. If an invalid format is detected it will return -1.
The function depends on the macros that are provided by the stdarg.h library. Ypu can find va_list, va_start, va_end, and others in this library.
