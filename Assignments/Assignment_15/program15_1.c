/*Write a program which accept name from user and print that name

    Input:  Ishant Mahadik
    Output: Ishant Mahadik
*/

#include<Stdio.h>

int main()
{
    char Name[30];

    printf("Enter name: ");
    scanf("%[^!\n]s",&Name);

    printf("Your name is: %s\n",Name);

    return 0;;
}