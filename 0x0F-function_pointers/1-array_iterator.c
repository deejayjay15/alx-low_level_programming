#include <stddef.h>/*defines size_t */
#include "function_pointers.h"

/**
 * array_iterator - execute function on an array via a function ptr
 * @array: array
 * @size: size of array
 * @action: pointer to function that we need to execute
 * Return: None
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	/*Match data type*/
	size_t i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(*(array + i));
}
