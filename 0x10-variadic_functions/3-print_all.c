#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: number of parameters
 */

void print_all(const char * const format, ...)
{
va_list args;
char chr, *str, *separator = "";
float flt;
int itgr, i = 0;
va_start(args, format);
while (format[i])
{
switch (format[i])
{
case 'c':
chr = va_arg(args, int);
printf("%s%c", separator, chr);
break;
case 'i':
itgr = va_arg(args, int);
printf("%s%d", separator, itgr);
break;
case 'f':
flt = va_arg(args, double);
printf("%s%f", separator, flt);
break;
case 's':
str = va_arg(args, char*);
if (str == NULL)
{
printf("%s(nil)", separator);
break;
}
printf("%s%s", separator, str);
break;
default:
break;
}
i++;
separator = ", ";
}
printf("\n");
}
