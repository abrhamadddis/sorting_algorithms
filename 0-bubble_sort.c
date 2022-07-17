#include "sort.h"
/**
 * bubble_sort - function It sorts an array of integers in ascending order  using the Bubble sort algorithm
 * @array :The array to be sorted
 * @size : the size of the array
 */
void bubble_sort(int *array, size_t size)
{
int pass;
int i;
if (!array || !size)
  return;
  for (pass = size - 1; pass >= 0; pass--)
  {
    for (i = 0; i < pass; i++)
    {
      if (array[i] > array[i + 1])
      {
      int temp = array[i];
      array[i] = array[i + 1];
      array[i + 1] = temp;
      print_array(array, size);
      }
    }
  }
}
