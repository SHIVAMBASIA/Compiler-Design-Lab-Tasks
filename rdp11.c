#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char expr[1024];
int i=0,f=0;
void S();
void A();
void B();
void C();
int main()
{
	int l;
	printf("Enter the String: ");
	scanf("%s",expr);
	l=strlen(expr);
	S();
	if((l==i)&&(f==0))
		printf("String parsed\n");
	else
		printf("String not parsed\n");
	return(0);
}

void A()
{
	if(expr[i]=='a')
	{
		i++;
		A();
	}
	else if(expr[i]=='b')
	{
		i++;
	}
	else
		f=1;
}

void B()
{
	if(expr[i]=='b')
	{
		i++;
		B();
	}
	else if(expr[i]=='c')
	{
		i++;
	}
	else
		f=1;
}

void C()
{
	if(expr[i]=='c')
	{
		i++;
		C();
	}
	else if(expr[i]=='d')
	{
		i++;
	}
	else
		f=1;
}

void D()
{
	if(expr[i]=='d')
	{
		i++;
		D();
	}
	else if(expr[i]=='e')
	{
		i++;
	}
	else
		f=1;
}
void S()
{
	if(expr[i]=='a'||expr[i]=='b')
	{
		A();
		B();
	}
	else if(expr[i]=='c'||expr[i]=='d')
	{
		C();
		D();
	}
}
