#include<stdio.h>
#include<stdlib.h>



/* a function to swap */
void swap(int *xp, int *yp)
{
	/* store the first point to a temp variable */
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/* bubble sort function */
void bubble_sort(int array[], int size)
{
	int j,i;
	for (i = 0; i < size - 1; i++)
	{
		for (j =0; j < size - i - 1; j++)
			if(array[j] > array[j + 1])
				swap(&array[j], &array[j + 1]);
	}
}
/* function tto print an aray  */
void print_array(int array[],int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", array[i]);
	printf("\n");
}

int main()
{
	int arr[] = {19,48,99,71,13,52,96,73,86,7};
	int n = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,n);
	printf("Sorted array: \n");
	print_array(arr,n);

exit(0);
}
