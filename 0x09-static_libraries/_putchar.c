#include <unistd.h>
/**
 * _putchar -  prints a single charcter to stdout
 * @c: the character that should be printed
 * Return: printed character
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
