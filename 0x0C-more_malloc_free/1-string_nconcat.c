#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
*  string_nconcat - this function is use to concatenate two strings.
*  @s1: this parameter is pointer 1
*  @s2: this parameter is pointer 2
*  @n: this parameter is equal to pointer 1 and pointer 2
*  Return: pointer to concatenates strings
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *d;
	unsigned int l1, l2;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	l1 = strlen(s1);
	l2 = strlen(s2) <= n ? strlen(s2) : n;

	d = malloc(l1 + l2 + 1);

	if (d == NULL)
	return (NULL);

	strcpy(d, s1);
	strncat(d, s2, n);

	return (d);
}
