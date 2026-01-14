%{
#include<stdio.h>
int newline = 0, tab = 0, space = 0, ch = 0;
%}

%%
\n	{newline++;}
\t	{tab++;}
" "	{space++;}
.	{ch++;}
%%

int yywrap()
{
	return 1;
}

int main()
{
	yylex();
	printf("No of newline characters: %d\n",newline);
	printf("No of tabs: %d\n",tab);
	printf("No of spaces: %d\n",space);
	printf("No of other characters: %d\n",ch);
	return 0;
};