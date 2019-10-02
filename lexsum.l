%{
#include<stdio.h>
int sum=0;
%}

%%
[0-9]+ {sum=sum+atoi(yytext);}

%%
void main()
{
	yyin=fopen("abc.txt","r");
	yylex();
	printf("Sum=%d\n",sum);	
}
