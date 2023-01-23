#include <stdio.h>

int main()
{
    int lines, i, j = 1, k;

    printf("Enter number of lines you desire:-");
    scanf("%d", &lines);

    while (j <= lines)
    {
        i = 0;
        while (i < (lines)-j + 1)
        {
            printf("*");
            i = i + 1;
        }

        if (j == 1)
        {
            i = i + 1;
            goto next;
        }

        while (i >= lines - j + 1)
        {
            if (i < lines + j - 1)
            {
                printf(" ");
            }

            if (i == lines + j)
            {
                break;
            }

            i = i + 1;
        }

    next:
        while (i >= lines + j)
        {
            if (i < 2 * (lines) + 1)
            {
                printf("*");
            }

            if (i == 2 * (lines) + 1)
            {
                break;
            }
            i = i + 1;
        }

        printf("\n");
        j = j + 1;
    }

    return 0;
}