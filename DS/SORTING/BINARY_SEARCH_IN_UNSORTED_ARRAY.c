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
            printf("Array sorted\n");
            break;
        }
        
    }

}

int BinarySearch(int array[], int num, int size){

    int low = 0;
    int high = size - 1;
    int mid;

    if (num == array[low])
    {
        printf("Element is present at position number 0\n");
        return 0;
    }

    else if (num == array[high])
    {
        printf("Element is present at position number %d\n", high);
        return 0;
    }
    else
    {
        while (high - low >= 2)
        {
            mid = (high + low)/2;

            if (array[mid] == num)
            {
                printf("Element is present at position number %d", mid);
                return 0;
            }

            else
            {
                if (array[mid] < num)
                {
                    low = mid;
                }
                else
                {
                    high = mid;
                }
                
            }
                
        }
        
    }
    
    

}



int main()
{
    int size = 6;

    int array[10] = {6,5,4,3,2,1};

    BubbleSort(array, size);

    Traversal(array, size);

    BinarySearch(array, 6, size);


    return 0;
}