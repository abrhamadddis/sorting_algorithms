#ifndef _SORT_H
#define _SORT_H
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
void bubble_sort(int *array, size_t size);

void quick_sort(int *array, size_t size);
void quicksort(int *array, size_t size, size_t first, size_t last);
int partition(int *array, size_t size, size_t first, size_t last);
#endif 
