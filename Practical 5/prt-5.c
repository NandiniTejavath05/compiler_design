#include<stdio.h>

int main()
{
    char str[20];
    printf("Enter production: ");
    scanf("%s",str);

    printf("Leading: %c\n",str[3]);
    printf("Trailing: %c\n",str[3]);
}
