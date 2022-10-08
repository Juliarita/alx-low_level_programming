#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*  _calloc - this function is allocateing a memory for an array using malloc.
* @nmemb: parameter use for the elements of the array
* @size: parameter use for the length of the array
* Return: pointer to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *n;

	if (nmemb == 0 || size == 0)
	return (NULL);

	n = calloc(nmemb, size);

	if (n == NULL)
	return (NULL);

	return (n);
}
