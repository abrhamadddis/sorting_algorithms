#include "sort.h"

/**
 * quick_sort - function call quicksort
 * @array :the array to be sorted
 * @size :the size of the array
 * @return the index of the pivot
 */
void quick_sort(int *array, size_t size)
{
if (!array || !size)
return;
quicksort(array, size, 0, size - 1);


}
/**
 * quicksort - function via partition schemes
 * @size: the size of the array
 * @array:the array to be sorted
 * @first :the index of the first element in the array
 * @last :the last index of the array
 */
void  quicksort(int *array, size_t size, size_t first, size_t last)
{
if (last > first)
{
int pivotIndex = partition(array, size,  first, last);
quicksort(array, size, first, pivotIndex - 1);
quicksort(array, size, pivotIndex + 1, last);
}
}
/**
 * partition - function partition the array
 * @array : the array to be sorted
 * @size: the size of the array
 * @first : the first index of the array
 * @last :the last index of the array
 * Return :void
 */
int partition(int *array, size_t size, size_t first, size_t last)
{
int pivot = array[first];
int low = first + 1;
int high = last;
while (high > low)
{
while (low <= high && array[low] <= pivot)
	low++;
while (low <= high && array[high] > pivot)
	high--;
if (high > low)
{
int temp = array[high];
array[high] = array[low];
array[low] = temp;

}
}
while (high > first && array[high] >= pivot)
	high--;
if (pivot > array[high])
{
array[first] = array[high];
array[high] = pivot;
return (high);
}
else
{
return (first);
}

}
