%{
#include<stdio.h>
int p=0;
int s=0;
%}

%%
scanf {s++;}
printf {p++;}

%%
void main()
{
	yyin=fopen("abc.txt","r");
	yylex();
	printf("Prinf=%d\n",p);
	printf("Scanf=%d\n",s);
}
