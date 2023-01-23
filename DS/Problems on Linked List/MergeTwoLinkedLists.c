#include <stdio.h>
#include <stdlib.h>


struct node{
    int data;
    struct node *next;
};


void FinalTraversal(struct node *p1){
    struct node *p = p1;

    while(p != NULL){
        printf("%d ", p -> data);
        p = p -> next;
    }
    printf("\n");

    free(p);
}

void InitialTraversal(struct node *head1, struct node *head2){
    struct node *p = head1;

    while(p != NULL){
        printf("%d ", p -> data);
        p = p -> next;
    }
    printf("\n");

    p = head2;
    
    while(p != NULL){
        printf("%d ", p -> data);
        p = p -> next;
    }
    printf("\n");

    free(p);
}



struct node *ArrayToLinkedList(struct node *p1, int num){
    struct node *insert = (struct node *)(malloc)(sizeof(struct node));
    
    while (p1 -> next != NULL)
    {
        p1 = p1 -> next;
    }

    p1 -> next = insert;
    insert -> data = num;
    insert -> next = NULL;


    return p1;
}

struct node *MergeLinkedList(struct node *head1, struct node *head2, struct node *p1, struct node *p2){
    struct node *p = head1;

    int array[20];
    int i = 0;

    while(p != NULL){
        array[i] = p -> data;
        i++;
        p = p -> next;
    }

    p = head2;
    while(p != NULL){
        array[i] = p -> data;
        i++;
        p = p -> next;
    }

    free(p);


    int j = 0;
    
    p2 = p1;
    p1 -> data = array[j];
    j++;
    p1 -> next = NULL;

    while (j < i)
    {
        p1 = ArrayToLinkedList(p1, array[j]);
        j++;
    }

    p1 = p2;
    
    return p1;
    
}


int main()
{
    struct node *head1 = (struct node *)malloc(sizeof(struct node));
    struct node *head2 = (struct node *)malloc(sizeof(struct node));
    struct node *p1 = (struct node *)malloc(sizeof(struct node));
    struct node *p2 = (struct node *)malloc(sizeof(struct node));

    struct node *neck1 = (struct node *)malloc(sizeof(struct node));
    struct node *neck2 = (struct node *)malloc(sizeof(struct node));

    struct node *chest1 = (struct node *)malloc(sizeof(struct node));
    struct node *chest2 = (struct node *)malloc(sizeof(struct node));

    struct node *stomach1 = (struct node *)malloc(sizeof(struct node));
    struct node *stomach2 = (struct node *)malloc(sizeof(struct node));

    struct node *legs1 = (struct node *)malloc(sizeof(struct node));
    struct node *legs2 = (struct node *)malloc(sizeof(struct node));


    head1 -> data = 1;
    head1 -> next = neck1;
    head2 -> next = neck2;
    head2 -> data = 2;

    neck1 -> data = 3;
    neck1 -> next = chest1;
    neck2 -> next = chest2;
    neck2 -> data = 4;

    chest1 -> data = 5;
    chest1 -> next = stomach1;
    chest2 -> next = stomach2;
    chest2 -> data = 6;

    stomach1 -> data = 7;
    stomach1 -> next = legs1;
    stomach2 -> next = legs2;
    stomach2 -> data = 8;

    legs1 -> data = 9;
    legs1 -> next = NULL;
    legs2 -> next = NULL;
    legs2 -> data = 10;

    InitialTraversal(head1, head2);

    MergeLinkedList(head1, head2, p1, p2);

    FinalTraversal(p1);
    
    return 0;
}