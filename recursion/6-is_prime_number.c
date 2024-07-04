/**
 *prime_checker - Checks for divisors
 *@n: number to prime-check
 *@i: Placeholder for the divisor
 *
 *Return: 1 if prime, 0 otherwise
 */
int prime_checker(int n, int i)
{
	if (i > n / 2)
		return (1);
	if (n % i == 0)
		return (0);

	return (prime_checker(n, i + 2));
}

/**
 *is_prime_number - Tests if a number is a prime number or not
 *@n: Number to test.
 *
 *Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n % 2 == 0)
		return (0);
	if (n == 1)
		return (0);
	if (n < 0)
		return (0);

	return (prime_checker(n, 3));
}
