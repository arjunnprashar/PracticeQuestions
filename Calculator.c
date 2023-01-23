#include <stdio.h>
#include <math.h>

/*Used- Functions, goto, math module(power)[Totally optional], integer division
            with float output, condition check*/

int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
int division(float a, float b);
int power(int a, int b);

int main(int argc, char const *argv[])
{

    int a, b, i;

start:
    printf(" \n \n \n");
    printf("1-Addition\n2-Subtraction\n3-Multiplication\n4-Division\n5-Power\n0-Exit\n");
    printf("Enter your choice(numerical ONLY)-\n");
    scanf("%d", &i);

    if (i == 1)
    {
        addition(a, b);
    }

    if (i == 2)
    {
        subtraction(a, b);
    }

    if (i == 3)
    {
        multiplication(a, b);
    }

    if (i == 4)
    {
        division(a, b);
    }

    if (i == 5)
    {
        power(a, b);
    }

    if (i == 0)
    {
        goto end;
    }

    printf(" \n \n \n");

    goto start;

end:
    printf("Exiting code...\n");
    return 0;
}

int addition(int a, int b)
{
    printf("So you chose to add two numbers\n");

    printf("Enter first number-\n");
    scanf("%d", &a);

    printf("Enter second number-\n");
    scanf("%d", &b);

    printf("%d + %d = ", a, b);
    printf("%d\n", a + b);
}

int subtraction(int a, int b)
{
    printf("So you chose to subtract two numbers\n");

    printf("Enter first number-\n");
    scanf("%d", &a);

    printf("Enter second number-\n");
    scanf("%d", &b);

    printf("%d - %d = ", a, b);
    printf("%d\n", a - b);
}

int multiplication(int a, int b)
{
    printf("So you chose to multiply two numbers\n");

    printf("Enter first number-\n");
    scanf("%d", &a);

    printf("Enter second number-\n");
    scanf("%d", &b);

    printf("%d x %d = ", a, b);
    printf("%d\n", a * b);
}

int division(float a, float b)
{
    printf("So you chose to divide two numbers\n");

    printf("Enter first number-\n");
    scanf("%f", &a);

    printf("Enter second number-\n");
    scanf("%f", &b);

    if (b == 0)
    {
        printf("Denominator can't be zero");
        return 0;
    }

    printf("%.0f / %.0f = ", a, b);
    printf("%.2f\n", a / b);
}

int power(int a, int b)
{
    printf("So you chose to multiply a number n times\n");

    printf("Enter base number-\n");
    scanf("%d", &a);

    printf("Enter power number-\n");
    scanf("%d", &b);

    printf("%d ^ %d = %.2f\n", a, b, pow(a, b));
}
