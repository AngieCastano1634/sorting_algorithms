#include "sort.h"
/**
 * main - Entry point
 * @array:
 * @size:
 * Return: nothing
 */
void shell_sort(int *array, size_t size)
{
	int tmp;
	size_t gap, i, j;

	if (array == NULL || size < 2)
		return;
        
	for (gap = 1; gap < size / 3;gap = gap * 3 + 1)
	{
		printf("%lu\n",gap);
	}
	
	for (gap = size / 2; gap > 0 ;gap = gap / 2)
	{
		for (j = gap, i = 0; j < size; i++, j++)
		{
			if (array[i] > array[j] && j < size)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				printf("%lu",gap);
				print_array(array,size);
			}
		}
	}
}