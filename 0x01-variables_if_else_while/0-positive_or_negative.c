#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - C program that assigns random number to the variable n each time
 * it is executed and prints wether it is positive, null or negative
 * Return: 0 always
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%d is ", n);
if (n > 0)
{
	printf("positive\n");
}
else if (n == 0)
{
	printf("zero\n");
}
else
{
	printf("negative\n");
}
return (0);
}
