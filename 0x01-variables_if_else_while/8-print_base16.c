#include <stdlib.h>
#include <stdio.h>
/**
 * main - C program that prints all the numbers of
 * base 16 in lowercase followed by a new line
 * Return: 0 always
 */
int main(void)
{
int i = 0;
char l = 'a';
while (i < 10)
{
putchar(i + '0');
i++;
}
while (l <= 'f')
{
putchar(l);
l++;
}
putchar('\n');
return (0);
}
