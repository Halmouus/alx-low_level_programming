#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: string in which the character is to be found
 * @needle: character to be found
 * Return: pointer to the beginning of the located substring
 * or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
int j;
while (*haystack)
{
if (*haystack != *needle)
{
haystack++;
continue;
}
j = 1;
while (*(needle + j))
{
if (*(haystack + j) != *(needle + j))
{
break;
}
j++;
}
if (!*(needle + j))
{
return (haystack);
}
haystack++;
}
return (0);

}
