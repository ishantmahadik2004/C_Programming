#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[0] ;
    
    printf("Enter your name: ");
    scanf("%s",sName);

    printf("Welcome %s",sName);

    return EXIT_SUCCESS;
}