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

struct stack *PushingFunc(struct stack *stonk, int value){

    if (stonk -> top >= (stonk -> size) -1)
    {
        printf("Stack cannot be pushed or STACK OVERFLOW\n");
        printf("Last pushed value was -\n%d\nThe value forcefully being pushed was -\n%d (REJECTED)\n\n", stonk -> array[stonk -> top], value);
        return 0;
    }

    else{
        stonk -> top ++;
        stonk -> array[stonk -> top] = value;

        printf("The value pushed into stack is -\n%d\n", stonk -> array[stonk -> top]);
    }
    printf("\n");
    return stonk;
}


struct stack *PoppingFunc(struct stack *stonk){

    if (stonk -> top <= -1)
    {
        printf("Stack cannot be popped\n");
        printf("Last popped value was -\n%d\n\n", stonk -> array[stonk -> top + 1]);
        return 0;
    }

    else{
        int val;
        val = stonk -> array[stonk -> top];

        printf("The popped value from the stack is -\n%d\n", val);
        stonk -> top --;
    }
    printf("\n");
    return stonk;
}


int main()
{   
    struct stack *stonk;

    stonk -> size = 10;
    stonk -> top = -1;
    stonk -> array = (int *)malloc(stonk -> size * (sizeof(int)));
    
    stonk -> top ++;
    stonk -> array[stonk -> top] = 11;
    
    stonk -> top ++;
    stonk -> array[stonk -> top] = 22;

    stonk -> top ++;
    stonk -> array[stonk -> top] = 33;

    stonk -> top ++;
    stonk -> array[stonk -> top] = 44;

    stonk -> top ++;
    stonk -> array[stonk -> top] = 55;

    stonk -> top ++;
    stonk -> array[stonk -> top] = 66;

    Traversal(stonk);

    PushingFunc(stonk, 77);
    PushingFunc(stonk, 88);
    PushingFunc(stonk, 99);
    PushingFunc(stonk, 109);
    PushingFunc(stonk, 199);

    PoppingFunc(stonk);
    
    return 0;
}