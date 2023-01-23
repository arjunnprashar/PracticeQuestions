#include <stdio.h>
#include <stdlib.h>

struct queue{
    int size;
    int top;
    int back;
    int * array;
};

void Traversal(struct queue * stonk){

    int count;
    count = stonk -> back;

    while (count != stonk -> top)
    {
        printf("%d\n", stonk -> array[count]);
        count = ((count + 1) % stonk -> size);
    }
    

}

int isFull(struct queue * stonk){

    if ((stonk -> top + 1) % (stonk -> size) == stonk -> back)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct queue * stonk){

    if (stonk -> top == stonk -> back)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void Insertion(struct queue * stonk, int i){

    if (isFull(stonk) == 1)
    {
        printf("Queue is full\n");
    }
    else
    {
        // printf("Yo"); 
        stonk -> array[stonk -> top] = i;
        stonk -> top = ((stonk -> top + 1) % stonk -> size);
        
        // printf("%d\n", stonk -> array[stonk -> top]);
        // printf("%d\n", stonk -> top);
    }
    
}

void Deletion(struct queue * stonk){

    if (isEmpty(stonk) == 1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        stonk -> back = ((stonk -> back + 1) % stonk -> size);
        // printf("Yo"); 
    }

}


int main()
{
    struct queue * stonk;

    stonk -> size = 5;
    stonk -> top = 0;
    stonk -> back = 0;
    stonk -> array = (int *)malloc((stonk -> size) * (sizeof(int)));


    Insertion(stonk, 1);
    Insertion(stonk, 2);
    Insertion(stonk, 3);
    Insertion(stonk, 4);

    Deletion(stonk);
    Deletion(stonk);

    Insertion(stonk, 1);

    Traversal(stonk);

    return 0;
}