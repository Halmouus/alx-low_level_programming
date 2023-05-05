#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits to be flipped to get from m to n
 * @n: input 1
 * @m: input 2
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int b_dif = n ^ m, i = 0;
while (b_dif)
{
i += b_dif & 1;
b_dif >>= 1;
}
return (i);
}

