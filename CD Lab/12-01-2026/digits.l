%{
#include<stdio.h>
int digits = 0;
%}

%%
[0-9]   {digits++;}
.       ;
%%

int yywrap()
{
    return 1;
}

int main()
{
    yylex();
    printf("The number of digits: %d\n",digits);
    return 0;
};