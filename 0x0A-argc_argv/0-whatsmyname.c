#include "main.h"
#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to those arguments
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char **argv)
{
printf("%s\n", *argv);
return (0);
}
