/**
 * _strspn -  gets the length of a prefix substring.
 * @s: string to lenth
 * @accept: number of bytes
 * Return: unsighned int ptr
 **/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int ptr, pptr;

	for (ptr = 0; s[ptr] != '\0'; ptr++)
	{

		for (pptr = 0; accept[pptr] != s[ptr]; pptr++)
		{
			if (accept[pptr] == '\0')
				return (ptr);
		}
	}
	return (ptr);

}
