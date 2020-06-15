#include "sort.h"

int lomotu_partition(int *array, int low, int hight, size_t size)
{
	int pi = low, pivot = array[hight], i = low, tmp;


	for (; i < hight; i++)
	{
		if (array[i] < pivot)
		{
			tmp = array[pi];
			array[pi] = array[i];
			array[i] = tmp;
			if (i != pi)
			{
				print_array(array, size);
			}
			pi++;
		}
	}
	tmp = array[pi];
	array[pi] = array[hight];
	array[hight] = tmp;
	if (i != pi)
	{
		print_array(array, size);
	}
	return (pi);
}


void quick_sort_rec(int *array, int low, int hight, size_t size)
{
        int pivot = 0;

        if (low < hight)
        {
                pivot = lomotu_partition(array, low, hight, size);
                quick_sort_rec(array, low, pivot - 1, size);
                quick_sort_rec(array, pivot + 1, hight, size);
        }
}

void quick_sort(int *array, size_t size)
{
        if (array == NULL || size < 2)
                return;
        quick_sort_rec(array, 0, size - 1, size);
}
