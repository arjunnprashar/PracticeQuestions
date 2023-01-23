#include<stdio.h>
#include<stdlib.h>


struct node{
    struct node *prev;
    int data1;
    struct node *next;
};


void ToAndFroTraversal(struct node *head){

    struct node *p = head;

    while (p -> next != NULL)
    {
        printf("%d\n", p -> data1);

        p = p -> next;
    }

    while (p -> prev != NULL)
    {
        printf("%d\n", p -> data1);

        p = p -> prev;
    }
    printf("%d\n", p -> data1);
    
}


int main()
{
    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node *neck = (struct node *)malloc(sizeof(struct node));
    struct node *chest = (struct node *)malloc(sizeof(struct node));
    struct node *stomach = (struct node *)malloc(sizeof(struct node));

    head -> prev = NULL;
    head -> data1 = 1;
    head -> next = neck;

    neck -> prev = head;
    neck->data1 = 3;
    neck->next = chest;

    chest -> prev = neck;
    chest->data1 = 5;
    chest->next = stomach;

    stomach -> prev = chest;
    stomach->data1 = 7;
    stomach->next = NULL;

    ToAndFroTraversal(head);

    return 0;
}