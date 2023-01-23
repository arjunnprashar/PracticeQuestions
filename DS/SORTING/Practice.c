#include <stdio.h>
#include <stdlib.h>


void Traversal(int array[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", array[i]);
    }
    
}


int Sorting(int array[], int size){

    int i = 0;

    while(i < size - 1)
    {
        if (array[i] > array[i + 1])
        {
            int a;

            a = array[i];

            array[i] = array[i + 1];
            array[i + 1] = a;

            i = 0;
            // printf("%d\n", array[0]);

        }
        else
        {
            // printf("Yo1\n");
            i++;
        }
        
    }
    return 0;
    

}


int main()
{
    int size = 9;
    int array[10] = {9,8,7,6,5,4,3,2,1};

    Sorting(array, 9);

    Traversal(array, 9);


    return 0;
}