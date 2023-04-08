#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers.
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to those arguments
 * Return: 0 on succuess, 1 on failure.
 */
int main(int argc, char **argv)
{
int i = 1, j, sum = 0;
for (; i < argc; i++)
{
j = 0;
for (; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
}
while (argc--)
sum += atoi(*argv++);
printf("%d\n", sum);
return (0);
}
