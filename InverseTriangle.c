#include <stdio.h>

int main()
{
    int lines, i, j=1;

    printf("Enter number of lines you desire:-");
    scanf("%d", &lines);

    while (j <= lines)
    {
        i = (lines)-j+1;
        while (i > 0)
        {
            printf("*");
            i = i - 1;
        }
        printf("\n");
        j=j+1;
    }

    return 0;
}