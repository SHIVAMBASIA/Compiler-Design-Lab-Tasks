#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char expr[50];
int i=0,f=0;
void E(){
T();
Ed();
}
void Ed(){
if(expr[i]=='+'){
i++;
T();
Ed();
}
else if(expr[i]=='-'){
i++;
T();
Ed();
}
}
void T(){
F();
Td();
}
void Td(){
if(expr[i]=='*')
{
i++;
F();
Td();
}
else if(expr[i]=='/')
{
i++;
F();
Td();
}
}
void F(){
if(expr[i]=='(')
{
i++;
E();
if(expr[i]==')')
{i++;
}}
else if(expr[i]=='n'){
i++;
}}
int main(){
int l;
printf("Enter a String to be parsed");
scanf("%s",&expr);
l=strlen(expr);
E();
if(l==i) printf("String Accepted");
else printf("String Rejected");
return 0;
}

