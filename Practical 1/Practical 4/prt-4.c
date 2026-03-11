#include<stdio.h>

int main()
{
    char nonterminal;
    printf("Enter Non-Terminal: ");
    scanf("%c",&nonterminal);

    printf("Follow(%c) = { $ }\n",nonterminal);
}
