#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @str: string to be encoded
 * Return: pointer to the resulting string
 */
 
char *rot13(char *str)
{
char a1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char a2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
int j, i = 0;
while (str[i])
{
j = 0;
while (j < 52)
{
if (str[i] == a1[j])
{
str[i] = a2[j];
break;
}
j++;
}
i++;
}

return (str);
}
