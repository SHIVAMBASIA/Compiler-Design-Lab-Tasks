/*
Implement recursive descent parser
1. S->aSB|bSa|NULL
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char expr[50];
int i=0,f=0;
void S()
{
	if(expr[i]=='a')
	{
		i++;
		S();
		if(expr[i]=='b')
		{
			i++;
		}
		else
			f=1;
	}
	else if(expr[i]=='b')
	{
		i++;
		S();
		if(expr[i]=='a')
			i++;
		else
			f=1;	
	}
	else 
		return;
}
int main()
{
	int l;
	printf("Enter a String to be parsed\n");
	scanf("%s",expr);
	l=strlen(expr);
	S();
	if((l==i)&&(f==0))
		printf("String parsed sucessfully\n");
	else
		printf("String rejected\n");	
	return(0);
}
