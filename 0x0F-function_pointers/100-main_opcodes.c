i#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to those arguments
 * Return: 0 on success, or Error on fail
 */
int main(int argc, char **argv)
{
int x, i = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
x = atoi(argv[1]);
if (x < 0)
{
printf("Error\n");
exit(2);
}
while (i < x)
{
if (!i)
printf("%02hhx", ((char *)main)[i]);
else
printf(" %02hhx", ((char *)main)[i]);
i++;
}
printf("\n");
return (0);
}
