%{
#include<stdio.h>
int num=0;
%}

%%
[0-9] { num++; ECHO; }
%%

main()
{
    yyin=fopen("practical10.txt","r");
    yylex();
    printf("\n%d digits", num);
}
