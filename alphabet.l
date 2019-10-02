%{
#include<stdio.h>
%}

%%
[a-zA-z]+ {printf("%s is a lexeme,%d is its length\n",yytext,yyleng);}

%%
void main()
{
	printf("Enter String: ");
	yylex();
}
