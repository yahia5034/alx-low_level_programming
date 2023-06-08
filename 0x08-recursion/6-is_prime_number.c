#include "main.h"

/**
 * prime - calc the numberif prime or not
 * @n: input
 * @c: iterator
 * Return:true or zero.
 */

int prime(int n, int c)
{
	if (c < n)
	{
		if (c * c == n)
			return (0);
		else
			return (prime(n, c + 1));
	}
	return (1);
}

/**
 * is_prime_number - calcalate if thenumber is prime or not
 * @n: input
 * Return: 1 if prime,else 0.
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	else if (n <= 1)
		return (0);
	return (prime(n, 2));
}

