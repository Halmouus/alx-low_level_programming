#include <stdlib.h>
#include <stdio.h>
/**
 * main - C program that prints the alphabet in lowercase
 * in reverse followed by a new line
 * Return: 0 always
 */
int main(void)
{
char l = 'z';
while (l >= 'a')
{
putchar(l);
l--;
}
putchar('\n');
return (0);
}
