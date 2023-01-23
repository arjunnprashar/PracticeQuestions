#include<stdio.h>

int main()
{
    char maths[4], science[4];
    
    printf("Have you passed in Maths? (yes/no)\n");
    // scanf("%s", &maths);
    gets(maths);

    printf("Have you passed in Science? (yes/no)\n");
    // scanf("%s", &science);
    gets(science);

    if (strcmp(maths,"yes")==0 && strcmp(science,"yes")==0)
    {
        printf("You will get gift worth Rs. 45");
    }

    else if ((strcmp(maths,"no")==0 && strcmp(science,"yes")==0))
    {
        printf("You will get gift worth Rs. 15 Science wala");
    }

    else if ((strcmp(maths,"yes")==0 && strcmp(science,"no")==0))
    {
        printf("You will get gift worth Rs. 15 Maths wala");
    }

    else
    {
        printf("Kissi me toh pass hoja");
    }
    
    return 0;
}