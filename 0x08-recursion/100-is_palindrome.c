#include "main.h"

/**
 * is_palindrome - function that returns 1 if a string is
 * a palindrome and 0 if not
 * @s: string to be checked
 * @b: fisrt index to be compared
 * @e: last index to be compared
 * Return: 1 if palindrome, 0 if not
 */
int palindrome_help(char *s, int b, int e);
int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
int l = _strlen_recursion(s);
return (palindrome_help(s, 0, l));
}
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string argument
 * Return: length of the string s
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (_strlen_recursion(s + 1) + 1);
}
/**
 * palindrome_help - function that checks for palindrome string
 * @b: fisrt index to be compared
 * @e: last index to be compared
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */
int palindrome_help(char *s, int b, int e)
{
if (e <= b)
return (1);
if (*(s + b) == *(s + e - 1))
return (palindrome_help(s, b + 1, e - 1));
else
return (0);
}
