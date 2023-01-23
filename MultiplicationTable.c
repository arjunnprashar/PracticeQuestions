#include <stdio.h>

int main()
{
    
    int a,b=0;
    printf("Enter the number who's table you desire\n");
    scanf("%d",&a);                     

    while (b<=10)
    {
        printf("%d",a);
        printf("x%d=",b);
        printf("%d\n",a*b);
        b+=1;
    }
    

    return 0;
}