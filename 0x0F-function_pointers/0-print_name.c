#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: string to be printed
 * @f: pointer to function that takes a string as parameter
 */

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
