#include <stdio.h>

/**
* main - main block
* Description: Print all possible combinations fo single-digit numbers.
* Numbers must be separated by commas and a space.
* You can only use putchar to print to console
* You can only use putchar up to four times.
* You are not allowed to use any variable of type char.
* Return: 0
*/
int main(void)
{
	for (char ch = '0'; ch <= '9'; ch++)
	{
		if (ch == '9')
		{
			putchar(ch);
		}
		else
		{
			putchar(ch);
			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
