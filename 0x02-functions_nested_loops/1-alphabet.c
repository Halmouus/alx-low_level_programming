#include "main.h"
/**
 * print_alphabet - function that prints the alphabet in lowercase
 * followed by a new line
 * Return: 0 success
 */
void print_alphabet(void)
{
char l = 'a';
while (l <= 'z')
{
_putchar(l);
l++;
}
_putchar('\n');
}
