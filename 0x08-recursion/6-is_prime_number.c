#include "main.h"
int primenumber(int n, int i);
/**
 * is_prime_number - executes primenumber
 * @n: input to be checked
 * return: 0 or 1.
 */
int is_prime_number(int n)
{
	if(n <= 1)
		return(0);
	else if(primenumber(n, n / 2) > 0)
		return(1);
	return(0);
}
/**
 * primenumber-checks if number is prime
 * @n: param 1
 * @i:param 2
 * return: 0 or 1
 */
int primenumber(int n, int i)
{
	if(i == 1)
		return(1);
	else if(n % i == 0)
		return(0);
	else
		return(primenumber(n, i - 1));
}
