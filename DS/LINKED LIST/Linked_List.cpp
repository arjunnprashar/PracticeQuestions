#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};


void LL_Traversal(struct node *pointer){
    while (pointer != NULL)
    {
        printf("%d\n", pointer->data);
        pointer = pointer->next;
    }
}

void LL_Search(struct node *pointer, int n){
    while (pointer != NULL)
    {
        if (n == pointer->data)
        {
            printf("%d\n", pointer->data);
            printf("%p\n", pointer);
            printf("%p\n", pointer->next);
        }
        
        pointer = pointer->next;
    }
}


int main()
{
    struct node *first_data;
    struct node *second_data;
    struct node *third_data;
    struct node *fourth_data;

    first_data = (struct node *)malloc(sizeof(struct node));
    second_data = (struct node *)malloc(sizeof(struct node));
    third_data = (struct node *)malloc(sizeof(struct node));
    fourth_data = (struct node *)malloc(sizeof(struct node));

    first_data->data = 1;
    first_data->next = second_data;
    
    second_data->data = 2;
    second_data->next = third_data;

    third_data->data = 3;
    third_data->next = fourth_data;

    fourth_data->data = 4;
    fourth_data->next = NULL;

    int n = 3;
    // LL_Traversal(first_data);

    LL_Search(first_data, n);

    return 0;
}