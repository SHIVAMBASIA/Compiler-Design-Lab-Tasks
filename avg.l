%{
        #include<stdio.h>
        int c=0;
        int a=0;
        float avg=0;
%}
%%
[0-9]+        {c=c+atoi(yytext);a++;}         
%%
void main()
{
yyin=fopen("abc.txt","r");
yylex();
avg=(float)c/(float)a;
printf("Sum=%d\n",c);
printf("Avg=%f\n",avg);
}
