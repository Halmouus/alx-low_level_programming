#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: pointer to the array of arguments
 * Return: pointer to a new string, or NULL if it fails, or if
 * ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
int k = 0, j, i = 0, size = 0;
char *str;
if (av == NULL || ac == 0)
return (0);
while (i < ac)
{
j = 0;
while (av[i][j])
{
size++;
j++;
}
size++;
i++;
}
str = malloc((size + 1) * sizeof(char));
if (str == 0)
return (0);
i = 0;
while (i < ac)
{
j = 0;
while (av[i][j])
{
str[k++] = av[i][j];
j++;
}
str[k++] = '\n';
i++;
}
str[k++] = '\0';
return (str);
}
