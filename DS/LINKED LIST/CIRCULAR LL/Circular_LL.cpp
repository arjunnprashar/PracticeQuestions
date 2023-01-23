#include<stdio.h>
#include<stdlib.h>


struct node{
    int data1;
    struct node *next;
};

void traversal_of_CLL(struct node *head){

    struct node *p = head;
    system("cls");
    printf("The CLL is -\n");
    while (p -> next != head)
    {
        printf("%d\n", p -> data1);
        p = p -> next;
    }
    printf("%d\n", p -> data1);
    free(p);
}


struct node *InsertionOnHead(struct node *head){

    int num;
    printf("Enter the number you want to insert -\n");
    scanf("%d", &num);

    struct node *insert = (struct node *)malloc(sizeof(struct node));

    insert -> next = head -> next;
    insert -> data1 = head -> data1;
    head -> data1 = num;
    head -> next = insert;
    
    return head;
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *neck = (struct node *)malloc(sizeof(struct node));
    struct node *chest = (struct node *)malloc(sizeof(struct node));
    struct node *stomach = (struct node *)malloc(sizeof(struct node));

    head -> data1 = 1;
    head -> next = neck;

    neck->data1 = 3;
    neck->next = chest;

    chest->data1 = 5;
    chest->next = stomach;

    stomach->data1 = 7;
    stomach->next = head;

    InsertionOnHead(head);
    traversal_of_CLL(head);

    return 0;
}