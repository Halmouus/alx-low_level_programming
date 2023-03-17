#include <stdlib.h>
#include <stdio.h>
/**
 * main - C program that prints the alphabet in lowercase
 * except q and e followed by a new line
 * Return: 0 always
 */
int main(void)
{
char l = 'a';
while (l <= 'z')
{
if (l == 'q' || l == 'e')
{
l++;
continue;
}
putchar(l);
l++;
}
putchar('\n');
return (0);
}
