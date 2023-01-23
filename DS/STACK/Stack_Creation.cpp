#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *array;
};

void IsEmpty(struct stack *stonk){

    system("cls");

    if (stonk -> top < 0)
    {
        printf("Stack is empty");
    }
    else{
        printf("Stack is not empty");
    }
    
}


int main()
{
    struct stack *stonk;

    stonk -> size = 6;
    stonk -> top = -1;
    stonk -> array = (int *)malloc(stonk -> size * sizeof(int));

    IsEmpty(stonk);
    
    return 0;
}