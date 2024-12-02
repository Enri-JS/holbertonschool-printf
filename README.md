
Project "_printf" - README file
--------------------------------------------------
Index:
--------------------------------------------------
#shortcut - section

#pf2 - project summary
#pf3 - _printf: Main Function
#pf4 - _printf: Sub-Functions
#pf4.a - %d / %i
#pf4.b - %u
#pf4.c - %o
#pf4.d - %x / %X
#pf4.e - %c
#pf4.f - %s
#pf4.g - %p
#pf4.h - %%
#pf4.i - /n
#pf5 - _printf: Examples
#pf6 - Authors
#pfEND - END

#pf2 - Project Summary
---------------------------------------------------
This is a custom implemntation of the printf function. It handles format specifiers and formated strings.
The function can print texts, numbers, or any type of data depending on the format specifier.

Examples of format specifiers are %s for strings, %c for characters, %i for a number and  %u for unsif=gned interger.

It searchers for a format and pritns string depndign on its specifer. format (const char *) with speciiers startign with %. if no format specifiers are foudn it prints the string as is.

Returns the length of the string, except for the null terminator. If an invalid format is detected it will return -1.
The function depends on the macros that are provided by the stdarg.h library. Ypu can find va_list, va_start, va_end, and others in this library.

#pf3 - _printf: Main Function
---------------------------------------------------
    The principal purpose of _printf is to print a given string, execute subfunctions when called, insert newlines where ordered, and deliver it all in one neat printed text.

#pf4 - _printf: Sub-Functions
---------------------------------------------------
    The secondary function of _printf is to scan through inserted texts for patterns that match any ("%" + Single Character) presets in order to execute the specified type of printing.

    Sub-Function Index:

    #pf4.a - %d , %i - print numbers: These insert numbers, both positive and negative

    #pf4.b - %u - print unsigned: These insert the unsigned variant

    #pf4.c - %o - print octal: These insert octal numbers

    #pf4.d - %x / %X - print hexadecimals(Lower and Higher end): These insert the lower and higher
ranges of hexadecimals, respectively.
    #pf4.e - %c - print character: inserts a single character

    #pf4.f - %s - print string: inserts a string

    #pf4.g - %p - print pointer: inserts a pointer's address

    #pf4.h - %% - percent: inserts a single percentage character

    #pf4.i - /n - newline: Inserts a new line

#pf5 - _printf: Examples
----------------------------------------------------

    1 - _printf("Hello, World!\n");

    output: "Hello, World!"

    2 - _printf("There are %d apples and %i pears\n", apples, pears);

    output: "There are 3 apples and 5 pears"

    3 - _printf("The location of %x in this directory is %p\n", hexL3, *Bapps)

    output: "The location of 8000003ff in this directory is 0x7ffe637541f0"

#pf6 - Authors
-----------------------------------------------------
1 - Daniel E De Jesus Sepulveda - Github: Enri-JS

2 - Jose Santiago - Github: SantiagoJose03

3 - Willie J Touset Castellar - Github: neonbloo25

Repository Link: https://github.com/Enri-JS/holbertonschool-printf

#pfEND - End of Readme
-----------------------------------------------------
