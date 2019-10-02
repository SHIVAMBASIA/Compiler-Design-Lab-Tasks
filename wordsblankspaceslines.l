%{
#include<stdio.h>
int n=0;
int b=0;
int w=0;
%}

%%
[\n] {n++;}
[ ] {b++;}
[	] {b++;}
[a-zA-z]+ {w++;}
%%
void main()
{
	yyin=fopen("abc.txt","r");
	yylex();
	printf("No of words=%d\n",w);
	printf("No of Blank spaces=%d\n",b);
	printf("No of lines=%d\n",n);	
}
