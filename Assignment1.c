#include <stdio.h>
#include <stdlib.h>

RegularTriangle(int lines, int i, int j);
InversedTriangle(int lines, int i, int j);

int main()
{
    int input, lines, i, j = 1;

    printf("Enter the pattern you want to print -\n1 - Regular Triangle\n2 - Inversed Triangle\n");
    scanf("%d\n", &input);

    if (input == 1)
    {
        RegularTriangle(lines, i, j);
    }

    if (input == 2)
    {
        InversedTriangle(lines, i, j);
    }

    return 0;
}

RegularTriangle(int lines, int i, int j)
{

    printf("Enter number of lines you desire:-\n");
    scanf("%d", &lines);

    while (j <= lines)
    {
        i = 1;
        while (i <= j)
        {
            printf("*");
            i = i + 1;
        }
        printf("\n");
        j = j + 1;
    }
}

InversedTriangle(int lines, int i, int j)
{

    printf("Enter number of lines you desire:-\n");
    scanf("%d", &lines);

    while (j <= lines)
    {
        i = (lines)-j + 1;
        while (i > 0)
        {
            printf("*");
            i = i - 1;
        }
        printf("\n");
        j = j + 1;
    }
}