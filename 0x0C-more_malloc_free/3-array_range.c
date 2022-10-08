#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*  array_range - this function is to create an array of integers.
*  @min: this parameter is to include all the values in max
*  @max: this parameter is to contain all the values created in the array
*  Return: the pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int *n, range, i = 0;

	if (min > max)
	return (NULL);

	range = max - min;
	n = malloc((range + 1) * sizeof(*n));

	if (n == NULL)
	return (NULL);

	for (range = min; range <= max; range++)
		n[i++] = range;

	return (n);
}
