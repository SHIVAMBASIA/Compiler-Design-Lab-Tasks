%{
        #include<stdio.h>
        int c=0;
        int v=0;
%}
%%
printf    {v++;}
scanf        {c++;}         
%%
void main()
{
yyin=fopen("file19.c","r");
yylex();
printf("scanf=%d\n",v);
printf("printf=%d\n",c);
}
