#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @n: number of parameters
 * @separator: separator between each string printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
char *temp;
va_start(args, n);
for (i = 0; i < n; i++)
{
temp = va_arg(args, char *);
if (separator != NULL && i != 0)
printf("%s", separator);
if (temp == NULL)
printf("(nil)");
else
printf("%s", temp);
}
printf("\n");
va_end(args);
}
