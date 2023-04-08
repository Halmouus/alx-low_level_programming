#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to those arguments
 * Return: 0 on succuess, 1 on failure.
 */
int main(int argc, char **argv)
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
