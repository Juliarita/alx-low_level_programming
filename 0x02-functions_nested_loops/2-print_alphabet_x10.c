/*
* File: 2-print_alphabet_x10.c
*/

#include <main.h>

/**
* main -check the code
*
* print_alphabet_x10
*
*return: Always 0.
*/
int main(void) 
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
			_putchar('\n');
	}
}
