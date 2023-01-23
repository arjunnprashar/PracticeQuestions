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
        if (expression[i] == '(' || expression[i] == '{' || expression[i] == '[')
        {    
            stonk -> top ++;        
            stonk -> array[stonk -> top] = expression[i];
        }

        else if (expression[i] == ')' || expression[i] == '}' || expression[i] == ']')
        {
            if (stonk -> top == -1)
            {
                printf("Parenthesis does not match\n");
                return 0;
            }
            else{
                //  TOP MATCHING OR NOT
                if(stonk -> array[stonk -> top] == '(' && expression[i] == ')'){
                    stonk -> top --;
                }
                else if(stonk -> array[stonk -> top] == '{' && expression[i] == '}'){
                    stonk -> top --;
                }
                else if(stonk -> array[stonk -> top] == '[' && expression[i] == ']'){
                    stonk -> top --;
                }
                else{
                    printf("Parenthesis does not match\n");
                    return 0;
                }
            }
            
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
    stonk -> size = 100;
    stonk -> top = -1;
    stonk -> array = (char *)malloc((stonk -> size) * (sizeof(char)));

    char * expression = "8*9({)-1";
    
    system("cls");
    MatchingParenthesis(stonk, expression);

    return 0;
}