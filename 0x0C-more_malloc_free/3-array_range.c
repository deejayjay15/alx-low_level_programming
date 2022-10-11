#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates array of integers ordered from min to max, inclusive
 * @min: The first value of the array
 * @max: The last value of the array
 * Return: If min > max or the function fails - NULL.
 *         Otherwise - a pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *a;/*array*/
	int i;/*index(counter)*/
	int s;/*size*/

	if (min > max)
		return (NULL);

	s = max - min + 1;

	a = malloc(sizeof(int) * s);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < s; i++)
		a[i] = min++;

	return (a);
}
