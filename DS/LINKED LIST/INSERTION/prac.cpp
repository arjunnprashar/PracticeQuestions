#include <iostream>
#include <algorithm>

using namespace std;

class node{
    public:
    int data;
    node * next;
};

void traversal(struct node * head){
    node *p = head -> next;

    while(p != NULL){
        cout<< p -> data <<" ";
        p = p -> next;
    }
    cout<<endl;
}

void insertionIndex(struct node * head, int index, int a){
    node *p = head;

    while(index--){
        p = p -> next;
    }

    node *temp = new node;

    temp -> data = a;
    temp -> next = p -> next;
    p -> next = temp;

}

void deletionIndex(struct node * head, int index){
    node *p = head;

    while(index--){
        p = p -> next;
    }

    p -> next = p -> next -> next;
}

void insertionTail(struct node * head, int a){
    node *p = head;

    while(p -> next != NULL){
        p = p -> next;
    }

    node *temp = new node;

    temp -> data = a;
    temp -> next = NULL;
    p -> next = temp;
}

void joining(struct node * head, struct node * head2){
    node *p = head -> next;

    while (p -> next != NULL)
    {

        p = p -> next;
    }

    p -> next = head2 -> next;
}

int main()
{
    node *head = new node;
    head -> next = NULL;

    node *head2 = new node;
    head2 -> next = NULL;

    
    for (int i = 1; i <= 5; i++)
    {
        insertionTail(head, i*i);
    }

    for (int i = 1; i <= 5; i++)
    {
        insertionTail(head2, i);
    }

    // insertionIndex(head, 3, -1);

    // traversal(head);
    // cout<<endl;

    // deletionIndex(head, 3);
    
    traversal(head);
    
    traversal(head2);

    joining(head, head2);

    traversal(head);

    return 0;
}