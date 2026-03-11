#include<stdio.h>
#include<string.h>

int main()
{
    char a[20],alpha[20],beta[20];
    int i=0,j=0;

    printf("Enter Grammar: ");
    scanf("%s",a);

    if(a[0]==a[3])
    {
        for(i=4;a[i]!='\0';i++)
            alpha[j++]=a[i];

        printf("Grammar without left recursion:\n");
        printf("%c->%c'\n",a[0],a[3]);
        printf("%c'->%s%c'|e\n",a[3],alpha,a[3]);
    }
    else
        printf("No left recursion");
}
