#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @str: string to be encoded
 * Return: pointer to the resulting string
 */
char *leet(char *str)
{
char low[5] = {'a', 'e', 'o', 't', 'l'};
char upp[5] = {'A', 'E', 'O', 'T', 'L'};
char num[5] = {'4', '3', '0', '7', '1'};
int i = 0, j;
while (str[i])
{
j = 0;
while (j < 5)
{
if (str[i] == low[j] || str[i] == upp[j])
{
str[i] = num[j];
break;
}
j++;
}
i++;
}
return (str);
}
