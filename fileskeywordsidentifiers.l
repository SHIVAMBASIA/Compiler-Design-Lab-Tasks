%{
#include<stdio.h>
int k=0;
int i=0;
%}

%%
auto |
break |
case |
char |
const |
continue |
default |
do |
else |
enum |
extern |
float |
for |
goto |
if |
int |
long |
register |
return |
short |
signed |
sizeof |
static |
struct |
switch |
typedef |
union |
unsigned |
void |
volatile |
while {k++;}
[a-zA-z]+ {i++;}

%%
void main()
{
	yyin=fopen("abc.txt","r");
	yylex();
	printf("No of keywords=%d\n",k);
	printf("No of identifiers=%d\n",i);	
}
