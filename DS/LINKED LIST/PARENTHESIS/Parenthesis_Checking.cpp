#include<stdio.h>
#include<stdlib.h>
#include <cstring>


struct stack{
    int size;
    int top;
    char * array;
};


int MatchingParenthesis(struct stack * stonk, char * expression){

    for (int i = 0; expression[i] != '\0'; i++)
    {
        if (expression[i] == '(')
        {      
            stonk -> top ++;      
            stonk -> array[stonk -> top] = expression[i];
            
        }

        else if (expression[i] == ')')
        {
            if (stonk -> top == -1)
            {
                printf("Parenthesis does not match\n");
                return 0;
            }
            
            stonk -> top --;
        } 
    }

    if (stonk -> top == -1)
    {
        printf("Parenthesis matches\n");
    }

    else{
        printf("Parenthesis does not match\n");
    }
    
    
}


int main()
{
    

    struct stack * stonk;
    stonk -> top = -1;
    stonk -> array = (char *)malloc((stonk -> size) * (sizeof(char)));

    char * expression = "(8*9()-1";
    stonk -> size = strlen(expression);

    system("cls");
    MatchingParenthesis(stonk, expression);

    return 0;
}