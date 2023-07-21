#include "main.h"

/**
 * print_diagonal - prints diagonal using the '\' character
 * @n: number of times the '\' should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < i; j++)
		{

			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
