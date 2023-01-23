#include <stdio.h>
#include <stdlib.h>

void Traversal(int array[], int size){


    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n\n");
    
}



void InsertionSort(int array[], int size){

    for (int i = 0; i < size - 1; i++)
    {
        int j = i + 1;
        int k = 0;

        while (j != 0)
        {
            if (array[i + 1 - k] > array[i - k])
            {
                j = 0;
            }

            else 
            {
                int a;

                a = array[i - k];
                array[i - k] = array[i - k + 1];
                array[i - k + 1] = a;
                j--;
                k++;
            }    
        }
        
    }

}


int main()
{
    system("cls");
    int size = 5;
    
    int array[10] = {5,4,3,2,1};

    InsertionSort(array, size);

    Traversal(array, size);


    return 0;
}