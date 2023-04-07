#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to those arguments
 * Return: Always 0.
 */
int main(int argc, char **argv  __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
