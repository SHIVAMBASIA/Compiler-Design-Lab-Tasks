#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
char a[100];
scanf("%s",&a);
int s,i=0,flag=1;
s=strlen(a);
if(a[0]>='0' && a[s-1]<='9'){
while(i<s){
if(a[i]>='0' && a[i]<='9') 
{flag=0;
}else 
{flag=1;
break;
}
i++;
}
if(flag==0) printf("String Accepted");
else printf("String Rejected");
}
else printf("String Rejected");
}
