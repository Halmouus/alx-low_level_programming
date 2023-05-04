/**
 * get_bit - returns the value of a bit at a given index
 * @n: input
 * @index: index of the input's binary representation
 * Return: the value of the bit at index index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
return (-1);
return ((n >> (sizeof(unsigned long int) * 8 - index - 1)) & 1);
}

