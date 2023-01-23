#include<stdio.h>
#include<stdlib.h>
#include<cstring>


struct stack{
    int size;
    int top;
    char * array;
};


int IsOperator(char * expression, int i){
    if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/')
    {
        return 1;
    }
    else{
        return 0;
    }
}

int Precedence(char ch){
    if (ch == '+' || ch == '-')
    {
        return 1;
    }
    else if (ch == '*' || ch == '/')
    {
        return 2;
    }
    
    else{
        return 0;
    }
}


void InfixToPostfix(struct stack * stonk, char * expression){
    int i = 0;
    int j = 0;

    char * Postfix = (char *)malloc((strlen(expression) + 1) * (sizeof(char)));

    while (expression[i] != '\0')
    {
        if (IsOperator(expression, i) == 0)
        {
            Postfix[j] = expression[i];
            i++;
            j++;
        }
        else{
            if (Precedence(expression[i]) > Precedence(stonk -> array[stonk -> top]))
            {
                stonk -> top++;
                stonk -> array[stonk -> top] = expression[i];
                i++;
            }

            else
            {
                Postfix[j] = stonk -> array[stonk -> top];
                j++;
                stonk -> top--;
            }
            
        }
        
        
    }
    if (Precedence(expression[1]) > Precedence('-'))
            {
                printf("YO\n");
            }
    
    while (stonk -> top != -1)
    {
        Postfix[j] = stonk -> array[stonk -> top];
        stonk -> top--;
        j++;
    }
    
    Postfix[j] = '\0';
    printf("%s ----> %s",expression, Postfix);
}


int main()
{
    struct stack * stonk;
    stonk -> size = 10;
    stonk -> top = -1;
    stonk -> array = (char *)malloc((stonk -> size) * (sizeof(char)));

    char * expression = "x-y/z-k*d";

    system("cls");

    InfixToPostfix(stonk, expression);
    
    return 0;
}