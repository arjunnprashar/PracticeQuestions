#include <stdio.h>
#include <stdlib.h>


void Traversal(int array[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    
}

void Swap(int array[], int i){
    int a;
    a = array[i];
    array[i] = array[i + 1];
    array[i + 1] = a;
}

void SelectionSort(int array[], int size){
    int i = size;
    int j = 0;
    
    while(j < size - 1){

        while(i > -1){

            if (array[i] > array[i + 1])
            {
                Swap(array, i);
            }
            
            i--;
        }

        i = size;
        j++;

    }
}

int main()
{
    int array[] = {6,5,4,3,2,1};
    int size = sizeof(array)/sizeof(array[0]);

    SelectionSort(array, size);

    Traversal(array, size);

    return 0;
}