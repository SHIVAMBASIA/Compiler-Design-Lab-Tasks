#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char expr[50];
int i=0,f=0;
void S(){
if(expr[i]=='b'){
i++;
Sd();
}
else if(expr[i]=='d'){
i++;
Ad();
if(expr[i]=='a'){
i++;
}
}}
void Sd(){
if(expr[i]=='c'){
i++;
Ad();
if(expr[i]=='a'){
i++;
}}}
void Ad(){
if(expr[i]=='b'){
i++;
Ad();
}
else if(expr[i]=='a' && expr[i+1]=='c'){
i++;
i++;
Ad();
}}
int main(){
int l;
printf("Enter a String to be parsed");
scanf("%s",&expr);
l=strlen(expr);
S();
if(l==i) printf("String Accepted");
else printf("String Rejected");
return 0;
}

