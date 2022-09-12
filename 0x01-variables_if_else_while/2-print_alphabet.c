#include <stdio.h>
/**
 * main - main block
 * Description: Use putchar function to print the alphabet in lowercase.
 * Return: 0
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar("%c ", ch);
		ch++;
	}
	putchar("\n");

	return (0);
}
