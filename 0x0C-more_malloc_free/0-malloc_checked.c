#include "main.h"
#include <stdlib.h>

/**
*  malloc_checked - this function allocate memory using malloc.
*  @b : is the parameter
*  Return: void pointer
*/

void *malloc_checked(unsigned int b)
{
	void *g;

	g = malloc(b);
	if (g == NULL)
	exit(98);

	return (g);
}
