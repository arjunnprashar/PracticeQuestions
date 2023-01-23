#include <stdio.h>

int main()
{
    int hours, pay;
    float tax, NetIncome;

    printf("Enter number of hours you worked in a week -\n");
    scanf("%d", &hours);

    if (hours <= 40)
    {
        pay = 12 * hours;
    }

    else
    {
        pay = 12 * 40 + 12 * (hours - 40) * 1.5;
    }

    //TAXES

    if (pay <= 300)
    {
        tax = pay * 0.15;
    }

    else if (pay > 300 && pay <= 450)
    {
        tax = 300 * 0.15 + (pay - 300) * 0.2;
    }

    else
    {
        tax = 300 * 0.15 + 150 * 0.2 + (pay - 450) * 0.25;
    }

    printf("Gross pay is -\n%d\n", pay);

    printf("Total taxes deducted are -\n%.2f\n", tax);

    printf("Net Pay is - %.2f", pay - tax);

    return 0;
}