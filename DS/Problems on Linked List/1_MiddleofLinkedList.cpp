#include<stdio.h>
#include<stdlib.h>


struct node {
    int data1;
    struct node *next;
};


void TraversalofLL(struct node *bodypart){

    system("cls");

    printf("The list is -\n");
    while (bodypart != NULL)
    {
        printf("%d ", bodypart -> data1);
        bodypart = bodypart -> next;
    }
    printf("\n");
}


struct node *FindMidElement(struct node *head1){

    int i = 0;
    int count = 0;

    struct node *p = head1;
    struct node *q = head1;

    while (p -> next != NULL)
    {
        count = count + 1;
        p = p -> next;
    }

    count = count + 1;

    printf("%d is the number of elements\n", count);
    
    if (count%2 == 0)
    {
        printf("Even no of elements\n");

        while (i < (count/2))
        {
            q = q -> next;
            i = i + 1;
        }

        printf("The middle element is - %d\n", q -> data1);
    }
    
    else
    {
        printf("odd no of elements\n");
        while (i < count/2)
        {
            q = q -> next;
            i = i + 1;
        }

        printf("The middle element is - %d\n", q -> data1);
    }

    return head1;
}


int main()
{   
    struct node *head1 = (struct node *)malloc(sizeof(struct node));
    struct node *head2 = (struct node *)malloc(sizeof(struct node));
    struct node *head3 = (struct node *)malloc(sizeof(struct node));
    struct node *head4 = (struct node *)malloc(sizeof(struct node));
    struct node *head5 = (struct node *)malloc(sizeof(struct node));
    struct node *head6 = (struct node *)malloc(sizeof(struct node));
    
    head1 -> data1 = 1;
    head1 -> next = head2;

    head2 -> data1 = 3;
    head2 -> next = head3;

    head3 -> data1 = 5;
    head3 -> next = head4;

    head4 -> data1 = 7;
    head4 -> next = head5;

    head5 -> data1 = 9;
    head5 -> next = head6;

    head6 -> data1 = 11;
    head6 -> next = NULL;

    TraversalofLL(head1);
    FindMidElement(head1);

    return 0;
}