#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);
/**
 * add - Adds two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The result of adding a and b.
 */
int add(int a, int b)
{
    return (a + b);
}

/**
 * sub - Subtracts one integer from another.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The result of subtracting b from a.
 */
int sub(int a, int b)
{
    return (a - b);
}

/**
 * mul - Multiplies two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The result of multiplying a and b.
 */
int mul(int a, int b)
{
    return (a * b);
}

/**
 * div - Divides one integer by another.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The result of dividing a by b.
 * If b is 0, returns 0 to avoid division by zero.
 */
int div(int a, int b)
{
    if (b == 0)
    {
        return (0);  /* Return 0 to handle division by zero */
    }
    return (a / b);
}

/**
 * mod - Finds the remainder of the division of two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The result of a % b.
 * If b is 0, returns 0 to avoid modulus by zero.
 */
int mod(int a, int b)
{
    if (b == 0)
    {
        return (0);  /* Return 0 to handle modulus by zero */
    }
    return (a % b);
}
