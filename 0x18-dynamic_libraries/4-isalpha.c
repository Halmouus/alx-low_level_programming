#include "main.h"
/**
 * _isalpha - function that checks for alpha character
 * @c : integer that represents the ASCII code of the checked character
 * Return: 1 if c is alpha, 0 otherwise
 */
int _isalpha(int c)
{
if ((c > 96 && c < 123) || (c > 64 && c < 91))
{
return (1);
}
else
{
return (0);
}
}

