#include "main.h"
/**
 * reverse_array - Reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 * Return: None
 */

void reverse_array(int *a, int n)
{
	int temp; /*Temporary location*/
	int i;/*Starting point*/
	int j;/*End point*/

	j = n - 1;/*Eliminating the null terminator*/
	i = 0;/*Starting point*/

	while (i < j)
	{
		temp = *(a + i);/*storing array temporarily*/
		*(a + i) = *(a + j);/*Swapping values*/
		*(a + j) = temp;/*Returning reversed array to a*/
		i++;
		j--;
	}
}
