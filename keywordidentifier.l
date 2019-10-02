%{
#include<stdio.h>
%}

%%
[ \t]+	{;}
void | 
for | 
while | 
int {printf("%s is a keyword",yytext);}
[a-zA-Z]+ {printf("%s is an identifier",yytext);}

%%
void main()
{
	printf("Enter String: ");
	yylex();
}
