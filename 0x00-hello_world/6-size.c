#include <stdio.h>
/**
* main - Entry point
*
* Description: this print the size of all variebles
*
* Return: when  return  0 always  success
*
*/

int main(void)
{
	printf("Size of a char:%lu byte(s)\n", sizeof(char));
	printf("Size of an int:%lu byte(s)\n", sizeof(int));
	printf("Size of a long int:%lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int:%lu byte(s)", sizeof(long long int));
	printf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}



