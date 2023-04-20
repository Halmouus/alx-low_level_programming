#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @n: number of parameters
 * @separator: separator between each number printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
int temp;
va_start(args, n);
for (i = 0; i < n; i++)
{
temp = va_arg(args, int);
if (separator == NULL || i == n - 1)
printf("%d", temp);
else
printf("%d%s", temp, separator);
}
printf("\n");
va_end(args);
}
