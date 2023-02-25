#include "main.h"
#include <stdio.h>
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	};

	for (i = 1; i <= size; i++)

	{
		for (j = size; j > i; j--)
		{
	_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
