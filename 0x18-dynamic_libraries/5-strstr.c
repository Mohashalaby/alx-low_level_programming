#include "main.h"
/**
 * *_strstr - function to locate substring
 *@haystack: parameter sting
 *@needle: input
 *Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *c = haystack;
		char *k = needle;

	while (*c == *k && *c != '\0')
		{
		c++;
	k++;
		}

		if (*k == '\0')
			return (haystack);
	}
	return (0);
}
