#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - performs simple operations.
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to those arguments
 * Return: 0 on success, 98, 99 or 100 on fail.
 */
int main(int argc, char **argv)
{
int par1, par2, result;
char *op;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
par1 = atoi(argv[1]);
par2 = atoi(argv[3]);
op = argv[2];
if (op[1] != '\0' || !get_op_func(op))
{
printf("Error\n");
exit(99);
}
if (par2 == 0 && (*op == '/' || *op == '%'))
{
printf("Error\n");
exit(100);
}
result = get_op_func(op)(par1, par2);
printf("%d\n", result);
return (0);
}
