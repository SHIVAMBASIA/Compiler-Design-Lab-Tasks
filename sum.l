%{
        #include<stdio.h>
        int c=0;
%}
%%
[0-9]+        {c=c+atoi(yytext);}         
%%
void main()
{
yyin=fopen("abc.txt","r");
yylex();
printf("Sum=%d\n",c);
}
