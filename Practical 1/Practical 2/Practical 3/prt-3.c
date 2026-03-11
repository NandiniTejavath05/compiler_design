#include<stdio.h>

int main()
{
    char production[10];
    printf("Enter production: ");
    scanf("%s",production);

    printf("First(%c) = { %c }\n",production[0],production[3]);
}
