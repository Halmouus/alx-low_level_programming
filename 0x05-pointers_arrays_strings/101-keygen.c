#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid passdwords
 * for 101-crackme
 * Return: 0 on success
 */
int main(void)
{
int psd[100];
int i = 0, s = 0, n = 0;
srand(time(NULL));
while (i < 100)
{
psd[i] = rand() % 78;
s += (psd[i] + '0');
putchar(psd[i] + '0');
if ((2772 - s) - '0' < 78)
{
n = 2772 - s - '0';
s += n;
putchar(n + '0');
break;
}
}
return (0);
}
