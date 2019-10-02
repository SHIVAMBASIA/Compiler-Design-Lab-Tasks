%{
#include<stdio.h>
int sum=0;
int count=0;
float avg;
%}

%%
[0-9]+ {sum=sum+atoi(yytext);count++;}

%%
void main()
{
	yyin=fopen("abc.txt","r");
	yylex();
	avg=(float)sum/count;
	printf("Average=%f\n",avg);	
}
