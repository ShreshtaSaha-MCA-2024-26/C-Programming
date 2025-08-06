// Write a C program to input any character and check whether it is an alphabet, digit, or special character.

#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("\n\n****C program to input any character and check whether it is an alphabet,digit, or special character**\n");
    printf("Name: Shreshta Saha, Class: MCA1B, Roll-40\n\n");
    printf("Enter any character: ");
    scanf("%c", &ch);
    if(isalpha(ch))
        printf("%c is an alphabet.\n",ch);
    else if(isdigit(ch))
        printf("%c is an digit.\n",ch);
    else
        printf("%c is a special character.\n",ch);
}