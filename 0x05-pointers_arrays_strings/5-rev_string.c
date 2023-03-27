#include "main.h"

/**
 * rev_string - function that reverses a string,
 * @s: string to be reversed
 */
void rev_string(char *s)
{
char rev = s[0];
int i = 0, j = 0;
while (s[i] != '\0')
{
i++;
}
i--;
while (j < i)
{
rev[0] = s[j];
s[j] = s[i];
s[i] = rev[0];
j++;
i--;
}
}
