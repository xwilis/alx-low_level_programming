#include<stdio.h>
#include "main.h"
/**
 * Main - check the code
 *
 * Return: Always 0
*/
void print_alphabet(void)
{
	char cs;
	for (cs = 'a'; cs <= 'z'; cs++)
	{
		putchar(cs);
	}
	putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
