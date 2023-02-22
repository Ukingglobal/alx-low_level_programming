#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet, in lowercase
 *
 * Return; always 0
 */
void print_alphabet_x10(void)
{

	int k;
	char u;


	while (k <= 9)
	{
		for (u = 'a'; u <= 'z'; u++)
		{
			_putchar(u);
			_putchar('\n');
			k++;
		}
	}

}
