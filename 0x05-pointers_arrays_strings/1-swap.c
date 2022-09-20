#include "main.h"
/*
* swap_int - swaps the two value integers
* @int *a: pointer to the first integer
* @int *b: pointer to the second integer
* Return:Null
*/
void swap_int(int *a, int *b)
{
int swp = *a;
*a = *b;
*b = swp;
}
