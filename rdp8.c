/*
E->TE'
E'->+TE'|NULL
T->FT'
T'->*FT'|NULL
F->(E)|n
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char expr[50];
int i=0,f=0;
void E();
void E1();
void T();
void T1();
void F();
void F()
{
	if(expr[i]=='(')
	{
		i++;
		E();
		if(expr[i]==')')
		{
			i++;
		}
		else
			f=1;
	}
	else if(expr[i]=='n')
	{
		i++;
	}
	else
		f=1;
}
void T()
{
	F();
	T1();
}
void T1()
{
	if(expr[i]=='*')
	{
		i++;
		F();
		T1();
	}
	else
		return;
}
void E1()
{
	if(expr[i]=='+')
	{
		i++;
		T();
		E1();
	}
	else
		return;
		
}
void E()
{
	T();
	E1();
}
int main()
{
	int l;
	printf("Enter a String to be parsed\n");
	scanf("%s",expr);
	l=strlen(expr);
	E();
	if((l==i)&&(f==0))
		printf("String parsed sucessfully\n");
	else
		printf("String rejected\n");	
	return(0);
}
