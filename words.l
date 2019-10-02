%{
        #include<stdio.h>
        int c=0;
        int v=0;
        int i=0;
%}
%%
[a-zA-Z]+        {c++;}     
[ ]               {v++;}    
[\n]             {i++;}
%%
void main()
{
yyin=fopen("file19.c","r");
yylex();
printf("Spaces=%d\n",v);
printf("Words=%d\n",c);
printf("Lines=%d\n",i);
}
