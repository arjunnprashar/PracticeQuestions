#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, x = 3, n1 = 0, n2 = 1, n3;

    printf("Enter number of terms in Fibonacci Series - \n");
    scanf("%d", &n);

    if ((n == 1) || (n == 2))
    {
        printf("%d\n", n - 1);
    }

    else
    {
        while (x <= n)
        {
            n3 = n2 + n1;
            printf("Term number %d is %d\n", x, n3);
            n1 = n2;
            n2 = n3;

            x = x + 1;
        }

        
    }
    return 0;
}