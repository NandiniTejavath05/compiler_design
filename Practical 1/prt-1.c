#include<stdio.h>
#include<ctype.h>

int main()
{
    char str[50];
    int i=0;

    printf("Enter string: ");
    scanf("%s",str);

    while(str[i]!='\0')
    {
        if(isalpha(str[i]))
            printf("%c is Identifier\n",str[i]);
        else if(isdigit(str[i]))
            printf("%c is Digit\n",str[i]);
        else
            printf("%c is Special Symbol\n",str[i]);

        i++;
    }
}
