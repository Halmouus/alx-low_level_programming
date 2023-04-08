i#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that prints the minimum number of coins
 * to make change for an amount of money
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to those arguments
 * Return: 0 on succuess, 1 on failure.
 */
int main(int argc, char **argv)
{
int count = 0, am;
int change[] = {25, 10, 5, 2, 1};
int *p = change;
if (argc != 2)
{
printf("Error\n");
return (1);
}
am = atoi(argv[1]);
if (am >= 0)
{
while (am)
{
if (am < *p)
{
p++;
continue;
}
count += am / *p;
am = am % *p;
p++;
}
}
printf("%d\n", count);
return (0);
}
