#include <stdio.h>
#include <stdlib.h>

struct node{
    int data1;
    struct node *next;
};

void Traversal(struct node *head){
    struct node *p = head -> next;

    if (p == NULL)
    {
        printf("Queue empty\n");
    }
    
    while (p -> next != NULL)
    {
        printf("%d\n", p -> data1);
        p = p-> next;
    }

    printf("%d\n", p -> data1);
    free(p);
}

struct node *Insertion(struct node *head, int i){

    struct node *insert = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;

    while (p -> next != NULL)
    {
        p = p -> next;
    }

    p -> next = insert;
    insert -> data1 = i;
    insert -> next = NULL;

    return head;
}

struct node *Deletion(struct node *head){
    
    if (head -> next == NULL)
    {
        printf("Queue empty\n");
    }
    else
    {
    head = head -> next;
    }
    
    return head;
}

int main()
{
    system("cls");

    struct node *head = (struct node *)malloc(sizeof(struct node));
    head -> next = NULL;

    Insertion(head, 1);
    Insertion(head, 2);
    Insertion(head, 3);
    Insertion(head, 4);


    head = Deletion(head);

    Traversal(head);

    return 0;
}