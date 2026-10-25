#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];
    
    printf("Enter your name: ");
    scanf("%[^'\n']s",sName);

    printf("Welcome %s",sName);

    return EXIT_SUCCESS;
}