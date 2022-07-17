#include "sort.h"
/**
 * selection_sort - a function that use selection sorthing algorthum
 * @array: is a pointer to an array
 * @size: is an int that represent the size of an array
 */
void selection_sort(int *array, size_t size)
{
int i, key, j;
int n = size;
for (i = 1; i < n; i++)
{
key = array[i];
j = i - 1;
while (j >= 0 && array[j] > key)
{
array[j + 1] = array[j];
j = j - 1;
}
array[j + 1] = key;
print_array(array, size);
}
}
