#include<stdio.h>
#include<stdlib.h>


struct stack{
    int size;
    int top;
    char *array;
};

int precedence(char ch){

    if (ch == '*' || ch == '/')
    {
        return 3;
    }

    else if (ch == '+' || ch == '-')
    {
        return 2;
    }

    else
    {
        return 0;
    }
    
}


int InfixToPostfix(struct stack * stonk, char * expression){

    int i = 0;
    int j = 0;
    char * postfix = (char *) malloc ( (strlen(expression) + 1) * (sizeof(char)));

    while(expression[i] != '\0')
    {
        if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/')
        {
            // check precedence and push in stack
            if (precedence(expression[i]) > precedence(stonk -> array[stonk -> top]))
            {
                stonk -> top ++;
                stonk -> array[stonk -> top] = expression[i];
                i++;
            }
            else
            {
                postfix[j] = stonk -> array[stonk -> top];
                stonk -> top --;
                j++;
            }
            
        }
        else
        {
            // push in string
            postfix[j] = expression[i];
            j++;
            i++;
        }
    }

    if (stonk -> top == -1)
    {
        printf("Equation successfully converted\n");
        return 0;
    }
    else
    {
        while (stonk -> top != -1)
        {
            // pop from stack and push to string
            postfix[j] = stonk -> array[stonk -> top];
            j++;
            stonk -> top --;
        }
        postfix[j] = '\0';
    }
    
    printf("Expression in INFIX -\n%s\n\n", expression);
    printf("Expression in POSTFIX -\n%s\n", postfix);
    
}


int main()
{   
    struct stack * stonk;
    stonk -> size = 10;
    stonk -> top = -1;
    stonk -> array = (char *)malloc((stonk -> size)*(sizeof(char)));

    char * expression = "x-y/z-k*d";

    system("cls");
    
    InfixToPostfix(stonk, expression);

    return 0;
}