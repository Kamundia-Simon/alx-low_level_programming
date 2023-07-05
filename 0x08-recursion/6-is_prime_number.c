#include "main.h"
/**
  *_prime - check if number is prime
  *@x: number to check
  *@y:divisor
  *Return: 0 or 1
  */
int _prime(int x, int y)
{
	if (x % y == 0)
	{
		return (0);
	}
	if (y == x / 2)
	{
		return (1);
	}
	return (_prime(x, y + 1));
}
/**
  *is_prime_number - return if number is prime
  *@n: number to check
  *Return: 0 or 1
  */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_prime(n, 2));
}
