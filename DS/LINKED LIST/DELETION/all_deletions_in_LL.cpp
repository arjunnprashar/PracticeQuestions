#include<stdio.h>
#include<stdlib.h>


struct node{
    int data1;
    struct node *next;
};

void traversal_of_LL(struct node *bodypart){

    system("cls");
    printf("The LL is -\n");
    while (bodypart != NULL)
    {
        printf("%d\n", bodypart -> data1);
        bodypart = bodypart -> next;
    }
    
}


struct node *deletion_of_head(struct node *head){

    struct node *p = head;
    head = head -> next;
    free(p);
    return head;
}


struct node *delete_at_index(struct node *head){

    struct node *p = head -> next;
    struct node *q = head;

    printf("Enter the index you want to delete -\n");
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n - 1; i++)
    {
        p = p -> next;
        q = q -> next;
    }
    
    q -> next = p -> next;
    free(p);
    return head;
    
}


struct node *deletion_of_tail(struct node *head){

    struct node *p = head -> next;
    struct node *q = head;
    while (p -> next != NULL)
    {
        p = p -> next;
        q = q -> next;
    }

    q -> next = NULL;
    free(p);
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
    stomach->next = NULL;

    head = deletion_of_head(head);       //deletion of head

    // head = delete_at_index(head);

    // head = deletion_of_tail(head);       //deletion at tail

    traversal_of_LL(head);

    return 0;
}