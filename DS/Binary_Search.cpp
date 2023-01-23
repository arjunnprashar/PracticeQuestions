#include<stdio.h>


int binary_search(int array1[], int high, int mid, int low, int search){

    if (search == array1[0])
    {
        printf("Element is present at position number %d", low);
        return 0;
    }

    else if (search == array1[high])
    {
        printf("Element is present at position number %d", high);
        return 0;
    }
    
    else
    {
        while (high - low>=2)
        {
            mid = (high + low)/2;
            
            if (array1[mid] == search)
            {
                printf("Element is present at position number %d", mid);
                return 0;
            }

            else
            {
                if (array1[mid] > search)
                {
                    high = mid;
                }

                else
                {
                    low = mid;
                }
            } 
        }

        printf("Element is not present in the array");
        return 0;
    }
}

int main()
{
    int array1[] = {1,3,5,7,44,77,322,444,667,999};
    int low = 0, mid, search;
    int high = (sizeof(array1)/(sizeof(int)));
    printf("Enter number you want to search\n");
    scanf("%d", &search);
    binary_search(array1, high, mid, low, search);
    return 0;
}
