/**
 * int_index - search for an integer in an integer array
 *
 * @array: array
 * @size: size of array
 * @cmp: comparison callback
 *
 * Return: index of the first element for which the cmp function
 * does not return 0
 * If no element matches, return -1, If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int index = -1;

	if (!array || !cmp)
		return (index);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (index);
}
