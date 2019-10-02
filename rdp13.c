#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char expr[50];
int i=0,f=0;
void S(){
if(expr[i]=='c'){
i++;
Sd();
X();
}
else if(expr[i]=='e'){
i++;
Ad();
if(expr[i]=='b'){
i++;
}
Sd();
}}
void X(){
if(expr[i]=='d'){
i++;
Ad();
if(expr[i]=='b'){
i++;
Sd();
}}}
void Sd(){
if(expr[i]=='a')
{i++;
Sd();
}}
void A(){
if(expr[i]=='c'){
i++;
Sd();
if(expr[i]=='d'){
i++;
Ad();
}}
else if(expr[i]=='e'){
i++;
Ad();
}}
void Ad(){
if(expr[i]=='c'){
i++;
Ad();
}
else if(expr[i]=='b'){
i++;
Sd();
if(expr[i]=='d'){
i++;
Ad();
}}
}
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

