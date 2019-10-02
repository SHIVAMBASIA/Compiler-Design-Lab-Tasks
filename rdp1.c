#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char expr[50];
int i=0,f=0;
void S(){
if(expr[i]=='a'){
i++;
S();
}
else if(expr[i]=='b')
{
i++;
}
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



