#include "main.h"
/**
* Function -  print
* Conditional: Statement
* Return: Always 0
*/
void print_alphabet_x10(void)
{
	for (int a = 0; a < 10; a++)
	{
		for (char xi = 'a'; xi <= 'z'; xi++)
		{
			putchar(xi);
		}
		putchar('\n');
	}
	return (0);
}
int main(void)
{
	print_alphabet_x10();
	//return (0);
}
