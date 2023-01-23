#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, i = 0, x = 0, answers[3];

    while (i <= 3)
    {
        scanf("%d", &a);
        scanf("%d", &b);
        answers[i] = (a + b);
        printf("%d + %d = %d\n", a, b, a + b);
        i = i + 1;
    }

    printf("String is %d\n", i);

    while (x <= 3)
        {
            printf("String is %d\n", answers[x]);
            x = x + 1;
        }

        return 0;
}