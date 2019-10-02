%{
        #include<stdio.h>
        int i=0;
        int k=0;
%}
%%
int |
void |
double |
main |
for |
while |
if |
else |
switch |
return |
float |
char |
auto |
const |
long |
case |
enum |
register |
bool |
static |
volatile |
goto |
extern |
continue |
default |
do |
break |
short |
typedef |
union |
signed |
unsigned     {k++;}     
[a-zA-Z]        {i++;}
%%
void main()
{
yyin=fopen("file19.c","r");
yylex();
printf("Keywords=%d\n",k);
printf("Identifiers=%d\n",i);
}
