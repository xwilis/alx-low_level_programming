#include<stdio.h>
/**
 * Main - check the code
 *
 * Return: Always 0
*/
void print_alphabet(void)
{
	for (char cs = 'a'; cs <= 'z'; cs++)
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
