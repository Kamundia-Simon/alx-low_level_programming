#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum of 2 numbers.
 * @a: num 1.
 * @b: num 2
 *Return: sum of the 2
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference of 2 numbers.
 * @a: num 1
 * @b: num 2
 * Return: The difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of 2 numbers.
 * @a: num 1
 * @b: num 2.
 * Return: The product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the division of 2 numbers.
 * @a: num 1
 * @b: num 2.
 * Return: The quotient of a and b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the remainder of the division of 2 numbers.
 * @a: num 1
 * @b: num 2
 * Return: The modulo a by b.
 */

int op_mod(int a, int b)
{
		return (a % b);
}
