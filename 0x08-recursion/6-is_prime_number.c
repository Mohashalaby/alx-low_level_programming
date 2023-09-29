#include "main.h"

int prime_num(int num1, int num2);
/**
 * is_prime_number - to check if the input integer is aprime number
 * @n: number
 * Return: 1 if prime number 0 if not
 **/

int is_prime_number(int n)
{
	if (n == 1)
	return (0);
	return (prime_num(n, n - 1));
}
/**
 * primr_num - calculate if the number is prime
 * @num1: number to evaluate
 *@num2: itertation
 * Return: 1 if prime 0 if not
 **/

int prime_num(int num1, int num2)
{
	if (num2 < 1)
		return (1);

	if (num1 % num2 == 0 && num2 > 0)

	return (prime_num(num1, num2 - 1));
}
