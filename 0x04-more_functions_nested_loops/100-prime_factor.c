#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
long int n = 612852475143;
long int i = 2, j, m, p = 0;
if (n < 0)
n = -n;
while (i < n)
{
if (n % i == 0)
{
j = 2;
while (j <= i)
{
if (i != j && i % j == 0)
{
p = 0;
break;
}
p = 1;
j++;
}
}
if (p == 1)
{
m = i;
}
p = 0;
i++;
}
if (m != 0)
printf("%ld\n", m);
else
printf("\n");
return (0);
}
