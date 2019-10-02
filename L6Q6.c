/*
Parse the string acgfh using LL(1)/Predictive parsing table for the following grammer :
 S->PQRLT
 P->aP|epsilon
 Q->bQ|c
 R-> cR|d
 L->dL|epsilon
 T->eT|f

 @ STANDS FOR EPSILON
*/

#include<string.h>
#include<stdio.h>
char terminals[] = {'a','b','c','d','e','f','$'};
char nonTerminals[] = {'S','P','Q','R','L','T'};

char table[6][7][6] = {{"PQRLT","PQRLT","PQRLT","","","",""},
                                        {"aP","@","@","","","",""},
                                        {"","bQ","c","","","",""},
                                        {"","","cR","d","","",""},
                                        {"","","","dL","@","@",""},
                                        {"","","","","eT","f",""}};

char stack[10], input[100], cs;
int top;

int getTerminal(char c) {
        int i;
        for(i=0; i<7; i++)
                if(terminals[i] == c)
                        return i;
        return -1;
}

int getNonTerminal(char c) {
        int i;
//      printf("\nSearching for %c.\n",c);
        for(i=0; i<6; i++)
                if(nonTerminals[i] == c)
                        return i;
        return -1;
}

int main() {
        int i, term, nonTerm;
        char temp[10];
        printf("Enter string:\t");
        scanf("%s",input);
        input[strlen(input)] = '$';

        cs=0;
        strcpy(stack,"$S");
        top = strlen(stack) - 1;
        printf("\nStack\tInput\tOutput\n");

        while(stack[top] != '$') {
                for(i=0; i<=top; i++)
                        printf("%c", stack[i]);
                printf("\t");
                for(i=cs; i<strlen(input); i++)
                        printf("%c", input[i]);
                printf("\t");
                if(input[cs] == stack[top]) {
                        top--;
                        cs++;
                        printf("Match");
                }
                else {
                        term = getTerminal(input[cs]);
                        nonTerm = getNonTerminal(stack[top]);

                        top--;
                        if(term == -1 || nonTerm == -1) {
                                printf("\nInvalid string.\n");
                                return 0;
                        }
                        strcpy(temp, table[nonTerm][term]);
                        if(!strcmp(temp, "")) {
                                printf("\nInvalid string.\n");
                                return 0;
                        }
                        else if(temp[0] != '@') {
                                for(i=strlen(temp)-1; i>=0; i--) {
                                        top++;
                                        stack[top] = temp[i];
                                }
                        }
                        printf("%c->%s",nonTerminals[nonTerm],temp);
                }
                printf("\n");
        }
        printf("Valid string.\n");
        return 0;
}
