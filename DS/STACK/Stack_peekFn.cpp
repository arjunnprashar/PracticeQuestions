#include<stdio.h>
#include<stdlib.h>


struct stack{
    int size;
    int top;
    int *array;
};


void Traversal(struct stack *stonk){
    
    system("cls");

    printf("The stack is -\n");

    for (int i = 0; i <= stonk -> top; i++)
    {
        printf("%d\n", stonk -> array[i]);
    }
    printf("\n");
    
}


void PushingUntillIWant(struct stack *stonk){
    int stop = 1;
    int num;

    printf("Keep entering numbers till you want\n");

    while (stop != 0 && stonk -> top < stonk -> size - 1)
    {
        scanf("%d", &num);
        stonk -> array[stonk -> top + 1] = num;
        stonk -> top ++;

        printf("Do you wish to continue?\nTo exit press 0 or 1 to continue\n");
        scanf("%d", &stop);
    }
    
}


void Peek(struct stack *stonk){

    int PeekingIndex;
    printf("Enter the position you want to peek\n");
    scanf("%d", &PeekingIndex);

    if (PeekingIndex <= stonk -> top + 1)
    {
        if (PeekingIndex >= 1)
        {
            printf("The value on position number %d is -\n%d\n", PeekingIndex,stonk -> array[PeekingIndex - 1]);
        }
        else{
            printf("Invalid peeking position");
        }
    
    }
    else{
        printf("Invalid peeking position");
    }
    
}


int main()
{
    struct stack *stonk;

    stonk -> size = 10;
    stonk -> top = -1;
    stonk -> array = (int *)malloc((stonk -> size) * (sizeof(int)));

    PushingUntillIWant(stonk);

    Traversal(stonk);

    Peek(stonk);
    
    return 0;
}