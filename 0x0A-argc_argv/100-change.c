#include "main.h"
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
int rs, n, amt = 0;
int change[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
rs = atoi(argv[1]);
if (rs < 0)
{
printf("0\n");
return (0);
}
for (n = 0; n < 5 && rs >= 0; n++)
{
while (rs >= change[n])
{
amt++;
rs -= change[n];
}
}
printf("%d\n", amt);
return (0);
}
