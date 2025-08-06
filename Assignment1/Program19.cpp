// Write a C program to input any alphabet and check whether it is a vowel or consonant.

#include <stdio.h>
int main()
{
    char ch;
    printf("\n\n****C program to input any alphabet and check whether it is a vowel orconsonant****\n");
    printf("Name: Shreshta Saha, Class: MCA1B, Roll-40\n\n");
    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        if (ch == 'a' || ch== 'e' || ch== 'i' || ch== 'o' || ch== 'u' || ch == 'A' || ch== 'E' || ch== 'I' || ch=='O' || ch== 'U')
        {
            printf("%c is a vowel.\n", ch);
        }
        else
        {
            printf("%c is a consonant.\n", ch);
        }
    } 
    else
    {
        printf("%c is not an alphabet.\n", ch);
    }
    return 0;
}
