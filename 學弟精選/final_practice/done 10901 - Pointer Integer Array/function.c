#include <stdio.h>
#include <stdlib.h>
#include "function.h"
int** malloc_ptr(int array_size)
{
	int ** a;
	a = (int**) malloc(array_size*sizeof(int*));
	return a;
} 

void malloc_array(int **array, int array_size)
{
	*array = (int*) malloc(array_size*sizeof(int));
}

void pointer_ptr_to_array(int *array, int **ptr,int N)
{
	int i, j=0;
	for(i=0;i<N;i++){
		j+=i;
		ptr[i] = &array[j];
		
	}
}
