/*
        E->E+T
        E->T
        T->T*F
        T->F
        F->(E)
        F->i
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char parTabA[12][6][4] = {{"s05","","","s04","",""},
                                                {"","s06","","","","acc"},
                                                {"","r02","s07","","r02","r02"},
                                                {"","r04","r04","","r04","r04"},
                                                {"s05","","","s04","",""},
                                                {"","r06","r06",",","r06","r06"},
                                                {"s05","","","s04","",""},
                                                {"s05","","","s04","",""},
                                                {"","s06","","","s11",""},
                                                {"","r01","s07","","r01","r01"},
                                                {"","r03","r03","","r03","r03"},
                                                {"","r05","r05","","r05","r05"}};

int parTabG[12][3] = {{1,2,3},
                                        {0,0,0},
                                        {0,0,0},
                                        {0,0,0},
                                        {8,2,3},
                                        {0,0,0},
                                        {0,9,3},
                                        {0,0,10},
                                        {0,0,0},
                                        {0,0,0},
                                        {0,0,0},
                                        {0,0,0}};

char parTabAH[7] = "i+*()$";
char parTabGH[4] = "ETF";

char grammarl[7] = "EETTFF";
char grammarr[6][4] = {"E+T","T","T*F","F","(E)","I"};

int findIndexA(char c) {
        int i;
        for(i=0;i<strlen(parTabAH);i++)
                if(parTabAH[i] == c)
                        return i;
        return -1;
}

int findIndexG(char c) {
        int i;
        for(i=0;i<strlen(parTabGH);i++)
                if(parTabGH[i] == c)
                        return i;
        return -1;

}

void showStack(int stack[], int top) {
        int i;
        for(i=0; i<=top; i++) {
                printf("%d",stack[i]);
        }
}

int main() {
        char input[20];
        int stack[20];
        int top, ptr, s, a, temp;

        printf("Enter string: ");
        scanf("%s", input);
        temp = strlen(input);
        input[temp] = '$';
        input[temp+1] = '\0';

        stack[0] = 0;
        top = 0;
        ptr = 0;

        printf("\n");

        while(1) {
                s = stack[top];
//              printf("s: %d\t",s);
                a = findIndexA(input[ptr]);
//              printf("a: %d\t",a);
//              printf("top: %d, stack[top]: %d\n",top,stack[top]);
//              printf("parTabA[s][a] : %s\n",parTabA[s][a]);
                if(parTabA[s][a][0] == 's') {
                        showStack(stack, top);
                        printf("\t%s\tShift\n", input+ptr);
                        stack[++top] = 10 * (parTabA[s][a][1] - 48) + parTabA[s][a][2] - 48;
                        ptr++;
                }
                else if(parTabA[s][a][0] == 'r') {
                        showStack(stack, top);
                        printf("\t%s\tReduce by ", input+ptr);
                        temp = parTabA[s][a][2] - 48 - 1;
                        top -= strlen(grammarr[temp]);
//                      printf("\nTemp: %d\tTop:%d\tStack[top]:%d\t",temp,top,stack[top]);
                        stack[top + 1] = parTabG[stack[top]][findIndexG(grammarl[temp])];
                        top++;
//                      printf("stack[top]: %d.\t",stack[top]);
                        printf("%c->%s\n", grammarl[temp], grammarr[temp]);
//                      printf("Top: %d, stack[top]:%d\n",top, stack[top]);
//                      showStack(stack, top);
                }
                else if(parTabA[s][a][0] == 'a'){
                        showStack(stack,top);
                        printf("\t%s\tAccept\n", input+ptr);
                        return 0;
                }
                else {
                        showStack(stack, top);
                        printf("\t%s\n", input+ptr);
                        printf("Invalid string.\n");
                        return 0;
                }
        }
        return 0;
}
