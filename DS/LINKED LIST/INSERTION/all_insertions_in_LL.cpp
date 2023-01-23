#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

struct node{
    int data1;
    struct node *next;
};

void traversal(struct node *bodypart){

    system("cls");

    printf("The new list is -\n");  

    while(bodypart != NULL){
        cout<<(bodypart->data1)<<endl;
        bodypart = bodypart->next;
    }
}


struct node *insertion_on_head(struct node *head){

    int num;
    struct node *insert = (struct node *)(malloc)(sizeof(struct node));

    cout<<("Enter the number you want to insert on head")<<endl;
    cin>>(num);

    insert -> next = head;
    insert -> data1 = num;
    return insert;
}


struct node *insertion_in_between(struct node *head){

    int n;
    int num;

    struct node *insert = (struct node *)(malloc)(sizeof(struct node));
    struct node *p = head;

    cout<<("Enter the number of node where you want to insert number\n");
    cin>>(n);

    cout<<("Enter the number you want to insert at the given index\n");
    cin>>(num);

    int count = 0;

    while (count < n - 1)
    {
        p = p -> next;
        count = count + 1;
    }

    insert -> next = p -> next;
    p -> next = insert;
    insert -> data1 = num;
    
    return head;
}


struct node *insert_at_the_end(struct node *head){
    
    int num;

    struct node *insert = (struct node *)(malloc)(sizeof(struct node));

    cout<<("Enter the number you want to insert in the end\n");
    cin>>(num);

    struct node *p = head;

    while (p -> next != NULL)
    {
        p = p -> next;
    }
    
    p -> next = insert;
    insert -> data1 = num;
    insert -> next = NULL;

    return head;
}

int main()
{
    
    struct node *head = (struct node *)(malloc)(sizeof(struct node));
    struct node *neck = (struct node *)(malloc)(sizeof(struct node));
    struct node *chest = (struct node *)(malloc)(sizeof(struct node));
    struct node *stomach = (struct node *)(malloc)(sizeof(struct node));

    head->data1 = 1;
    head->next = neck;

    neck->data1 = 3;
    neck->next = chest;

    chest->data1 = 5;
    chest->next = stomach;

    stomach->data1 = 7;
    stomach->next = NULL;

    // head = insertion_on_head(head);            //For insertion on head

    insertion_in_between(head);                //For insertion in between

    // insert_at_the_end(head);                   //For insertion at the end


    // insert_at_the_end(head);
    
    traversal(head);

    return 0;
}