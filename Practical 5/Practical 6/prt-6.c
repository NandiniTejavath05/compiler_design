#include<stdio.h>
#include<string.h>

int main()
{
    char stack[20],input[20];
    int top=-1,i=0;

    printf("Enter input string: ");
    scanf("%s",input);

    while(input[i]!='\0')
    {
        stack[++top]=input[i];
        printf("Shift %c\n",input[i]);
        i++;
    }

    printf("String Accepted\n");
}
