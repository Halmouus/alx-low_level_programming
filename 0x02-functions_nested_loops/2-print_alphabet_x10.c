#include "main.h"
/**
 * print_alphabet_x10 - function that prints the alphabet in
 * lowercase 10 times followed by a new line
 * Return: 0 success
 */
void print_alphabet_x10(void)
{
int i = 0;
while (i < 10)
{
char l = 'a';
while (l <= 'z')
{
_putchar(l);
l++;
}
_putchar('\n');
i++;
}
}

