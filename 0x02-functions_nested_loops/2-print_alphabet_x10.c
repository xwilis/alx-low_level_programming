#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char ops;

	while (count++ <= 9)
	{
		for (ops = 'a'; ops <= 'z'; ops++)
			_putchar(letter);
		_putchar('\n');
	}
}
