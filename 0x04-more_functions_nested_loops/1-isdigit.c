#include "main.h"
/**
 *_isdigit - function that checks for a digit
 * @c : integer that represents the ASCII code of the checked character
 * Return: 1 if c is digit, 0 otherwise
 */
int _isdigit(int c)
{
if (c > 47 && c < 58)
{
return (1);
}
else
{
return (0);
}
}
