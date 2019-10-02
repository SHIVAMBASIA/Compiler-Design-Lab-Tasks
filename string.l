%{
#include<stdio.h>
%}

%%
[ \t]+ {;}

%%
void main()
{
	printf("Enter String: ");
	yylex();
	printf("text=%s\n",yytext);
}
