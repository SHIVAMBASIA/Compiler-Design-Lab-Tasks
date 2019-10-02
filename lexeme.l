%{
        #include<stdio.h>
%}
%%
[a-zA-Z]+       {printf("%s is a lexeme1,%d is its length1\n",yytext,yyleng);}
[0-9]+  {printf("%s is a lexeme2,%d is its length2\n",yytext,yyleng);}
[_]+    {printf("%s is a lexeme3,%d is its length3\n",yytext,yyleng);}         
%%
void main()
{
yylex();
}
