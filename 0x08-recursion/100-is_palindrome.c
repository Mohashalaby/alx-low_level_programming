#include "main.h"

int check(char *s, int i, int l);
int _str_recursion(char *s);

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string parameter
 * Return: 1 if yes 0 if not
 **/
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check(s, 0, _str_recursion(s)));
}

/**
 * _str_recursion - to git the lenth of string
 *@s: string
 *Return: length of string
 */
int _str_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _str_recursion(s + 1));
}

/**
 * check - check if  the charachter recursively for palindrome
 * @s: string
 * @i: iteration
 * @l: lengh of stirng
 * Return: 1 if palindrome 0 if not
 **/
int check(char *s, int i, int l)
{
	if (*(s + i) != *(s + l - 1))
		return (0);
	if (i >= l)
		return (1);

	return (check(s, i + 1, l - 1));
}

