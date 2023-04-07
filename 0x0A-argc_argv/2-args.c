#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to those arguments
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
while (argc--)
printf("%s\n", *argv++);
return (0);
}
