#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long num = 612852475143;
	unsigned long i;
	unsigned long large_prime;
	
	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			large_prime = i;
			num /= large_prime;
		}
	}
	printf("%lu\n", large_prime);
	return (0);
}
