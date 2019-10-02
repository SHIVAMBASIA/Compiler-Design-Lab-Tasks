#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
char a[100];
scanf("%s",a);
int s,i;
s=strlen(a);
if(s==1)
{if(a[0]=='>' || a[0]=='<') printf("String Accepted");
else printf("String Rejected");
}
else if(s==2)
{
if((a[0]=='='||a[0]=='!'||a[0]=='>'||a[0]=='<') && (a[1]=='=')) printf("String Accepted");
else printf("String Rejected");
}
else printf("String Rejected");
}
