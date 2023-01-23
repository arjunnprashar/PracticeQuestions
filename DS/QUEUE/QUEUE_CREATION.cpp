#include<stdio.h>
#include<iostream>
#include<stdlib.h>

struct queue{
    int size;
    int top;
    int back;
    int * array;
};

void Traversal(struct queue *stonk){
    printf("Elements in queue are -\n");

    int count;
    count = stonk -> top;
    while (count > stonk -> back)
    {
        printf("%d\n", stonk -> array[count]);
        count --;
    }
    
}

void DeletionType2(struct queue *stonk){

    if (stonk -> top <= stonk -> back)
    {
        printf("Queue is empty cannot delete\n");
    }
    else
    {
        stonk -> back ++;
    }
    
}

void DeletionType1(struct queue *stonk){

    if (stonk -> top <= stonk -> back)
    {
        printf("Queue is empty cannot delete\n");
    }

    else
    {
        int count = 0;

        while (count <= stonk -> top)
        {
            if (count == stonk -> top)
            {
                stonk -> top --;
                break;
            }
            
            stonk -> array[count] = stonk -> array[count + 1];
            count ++;
        }
    }
     
}

void Insertion(struct queue *stonk, int i){

    if (stonk -> top == stonk -> size - 1)
    {
        printf("Cannot insert!! Queue is full\n");
    }
    else
    {
        stonk -> top ++;
        stonk -> array[stonk -> top] = i;
    }
    
    
}


int main()
{
    system("cls");

    struct queue * stonk;
    
    stonk -> size = 7;
    stonk -> top = -1;
    stonk -> back = -1;
    stonk -> array = (int *)malloc((stonk -> size) * (sizeof(int)));

    Insertion(stonk, 1);
    Insertion(stonk, 2);
    Insertion(stonk, 3);
    Insertion(stonk, 4);
    Insertion(stonk, 5);


    // DeletionType1(stonk);       //O(n)


    // DeletionType2(stonk);       //O(1)

    Traversal(stonk);

    return 0;
}