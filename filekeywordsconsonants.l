%{
#include<stdio.h>
int c=0;
int v=0;
%}

%%
[aeiouAEIOU] {v++;}
[a-zA-Z] {c++;}

%%
void main()
{
	yyin=fopen("abc.txt","r");
	yylex();
	printf("Vowels=%d\n",v);
	printf("Consonants=%d\n",c);
}
