#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

void traversal(struct node *top){

    if (top == NULL)
    {
        printf("Stack is empty\n");
    }
    else{    
        printf("The stack is -\n");  

        while(top != NULL){
            printf("%d\n", top-> data);
            top = top ->next;
        }
    }
}

void IsEmpty(struct node *top){
    if (top == NULL)
    {
        printf("Stack is empty\n");
    }
    else{
        printf("Stack is not empty\n");
    }
}

void IsFull(struct node *top){
    struct node * check = (struct node *)malloc(sizeof(struct node));

    if (check == NULL)
    {
        printf("Stack Overflow\n");
    }
}

struct node * push(struct node * top, int value){
    struct node * n = (struct node *)malloc(sizeof(struct node));

    if (n == NULL)
    {
        printf("Stack Overflow");
    }
    else{
        n -> data = value;
        n -> next = top;
        top = n;
        // printf("Insertion successful\n");
    }
    return top;
}

struct node * pop(struct node * top){

    if (top == NULL)
    {
        printf("Stack is empty\nCannot pop\n");
    }
    else{
        printf("The element popped is -\n%d\n", top -> data);
        top = top -> next;
    }
    return top;
}

void Peek(struct node *top){

    int PeekingNum;
    printf("Enter the index from top you want to peek\n");
    scanf("%d", &PeekingNum);
    
    for (int i = 0; i < PeekingNum - 1; i++)
    {
        top = top -> next;
    }
    printf("The number on the index %d from the top is -\n%d\n", PeekingNum, top -> data);

}

void StackTop(struct node * top){
    printf("The data at the top of the stack is -\n%d\n", top -> data);
}

void StackBottom(struct node * top){
    while (top -> next != NULL)
    {
        top = top -> next;
    }
    printf("The data at the bottom of the stack is -\n%d\n", top -> data);
}

int main()
{
    system("cls");
    struct node *top = NULL;
    
    top = push(top, 11);
    top = push(top, 22);
    top = push(top, 33);
    top = push(top, 44);
    top = push(top, 55);
    top = push(top, 66);

    top = pop(top);

    traversal(top);

    Peek(top);

    StackTop(top);

    StackBottom(top);

    return 0;
}