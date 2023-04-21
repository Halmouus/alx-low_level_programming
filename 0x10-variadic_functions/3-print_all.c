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
char chr, *str;
float flt;
int itgr, i = 0;
va_start(args, format);
while (format[i])
{
switch (format[i])
{
case 'c':
chr = va_arg(args, int);
printf("%c", chr);
break;
case 'i':
itgr = va_arg(args, int);
printf("%d", itgr);
break;
case 'f':
flt = va_arg(args, double);
printf("%f", flt);
break;
case 's':
str = va_arg(args, char*);
if (str == NULL)
{
printf("(nil)");
break;
}
printf("%s", str);
break;
default:
break;
}
i++;
}
printf("\n");
}
