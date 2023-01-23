#include <stdio.h>
#include <stdlib.h>

void Traversal(int array[], int size){


    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n\n");
    
}


void BubbleSort(int array[], int size){

    for (int i = 0; i < size - 1; i++)
    {
        int count = 0;

        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int a;

                a = array[j];
                array[j] = array[j + 1];
                array[j + 1] = a;
                count++;
            }
        }

        if (count == 0)
        {
            printf("Array sorted and time saved\n");
            break;
        }
    }
    
}


int main()
{
    system("cls");
    int size = 6;
    
    int array[100] = {6,5,4,3,2,1};
    // int size = sizeof(array)/sizeof(array[0]);

    printf("Array before sorting -\n\n");
    Traversal(array, size);

    BubbleSort(array, size);

    printf("Array after sorting -\n\n");
    Traversal(array, size);
    
    return 0;
}