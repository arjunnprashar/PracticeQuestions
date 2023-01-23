#include <stdio.h>
#include <stdlib.h>


struct node{
    int data1;
    struct node *down;
    struct node *right;
};


void ArrayTraversal(int array[], struct node *a){
    printf("\n");
    int i = 0;

    while (i < LinkedListCounter(a) - 1)
    {
        printf("%d -> ", array[i]);
        i++;
    }
    printf("%d", array[i]);
    
}

void Sorting(int array[], struct node *a){

    int i = 0;
    int z = LinkedListCounter(a);
    
    while (i < z - 1)
    {
        int j = 0;

        while (j < i + 1)
        {
            
            if (array[i - j] > array[i - j + 1])
            {
                int a;
                a = array[i - j];
                array[i - j] = array[i - j + 1];
                array[i - j + 1] = a;
            }
            j++;
        }
        i++;
        
        
    }
    


}


int LinkedListTraversal(int array[], struct node *a){
    int i = 0;

    struct node *p = a;
    struct node *q = a;

    while (p -> down != NULL)
    {
        while (p -> down != NULL)
        {
            array[i] = p -> data1;
            i++;
            printf("%d ", p -> data1);
            p = p -> down;
        }

        array[i] = p -> data1;
        i++;
        printf("%d ", p -> data1);

        p = q -> right;
        q = q -> right;

        if (p == NULL)
        {
            break;
        }
        

    }
    
}


int LinkedListCounter(struct node *a){
    
    int count = 0;
    struct node *p = a;
    struct node *q = a;

    while (p -> down != NULL)
    {
        while (p -> down != NULL)
        {
            p = p -> down;
            count++;
        }
        count++;

        p = q -> right;
        q = q -> right;

        if (p == NULL)
        {
            break;
        }
    }
    return count;
}


int main()
{
    system("cls");

    struct node *a = (struct node *)malloc(sizeof(struct node));
    struct node *b = (struct node *)malloc(sizeof(struct node));
    struct node *c = (struct node *)malloc(sizeof(struct node));
    struct node *d = (struct node *)malloc(sizeof(struct node));
    struct node *e = (struct node *)malloc(sizeof(struct node));
    struct node *f = (struct node *)malloc(sizeof(struct node));
    struct node *g = (struct node *)malloc(sizeof(struct node));
    
    a -> data1 = 10;
    a -> down = b;
    a -> right = d;

    b -> data1 = 20;
    b -> down = c;
    b -> right = NULL;

    c -> data1 = 5;
    c -> down = NULL;
    c -> right = NULL;

    d -> data1 = 50;
    d -> down = g;
    d -> right = e;

    e -> data1 = 1;
    e -> down = f;
    e -> right = NULL;

    f -> data1 = 30;
    f -> down = NULL;
    f -> right = NULL;

    g -> data1 = 40;
    g -> down = NULL;
    g -> right = NULL;

    int array[20];

    LinkedListTraversal(array,  a);

    Sorting(array, a);

    ArrayTraversal(array, a);


    return 0;
}