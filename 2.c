#include <stdio.h>

int main()
{
    int maths, science;

    printf("Have you passed in Maths? (yes-1/no-2)\n");
    scanf("%d", &maths);

    printf("Have you passed in Science? (yes-1/no-2)\n");
    scanf("%d", &science);

    if (maths==1 && science==1)
    {
        printf("45");
    }
    
    return 0;
}