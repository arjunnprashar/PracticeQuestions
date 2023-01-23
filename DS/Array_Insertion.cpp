#include<stdio.h>

void display_array1(int array1[], int size)
{
	for ( int i = 0; i < size; i++)
	{
		printf("%d ", array1[i]);
	}	
}

void arrayreversal(int array1[], int size){
	int j = 0;

	while(j < size/2){
            int a;
            a = array1[j];
            array1[j] = array1[size - j - 1];
            array1[size - j - 1] = a;
            j++;
            
        }
}

int insertion_func(int array1[], int size, int capacity, int index, int insertion){
	if (size>=capacity)
	{
		return -1;
	}

	else
	{
		for (int i = size - 1; i >= index; i--)
		{
			array1[i+1] = array1[i];
		}

		array1[index] = insertion;

		return 1;
	}
}

int main()
{
	int size = 7;
	int array1[100] = {1,3,5,77,4,7,322};
	// insertion_func(array1, 8, 100, 4, 99999);
	display_array1(array1, size);
	printf("\n");
	arrayreversal(array1, size);
	display_array1(array1, size);
	return 0;
}
