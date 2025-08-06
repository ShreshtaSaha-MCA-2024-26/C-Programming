// Write a C program to check whether a character is alphabet or not.

#include<stdio.h>
int main()
{
   char ch;
   printf("\n\n***C program to check whether a character is alphabet or not*\n");
   printf("Name: Shreshta Saha, Class: MCA1B, Roll-40\n\n");
   printf("Enter a character: ");
   scanf("%c", &ch);
   if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
   {
      printf("%c is an alphabet.\n", ch);
   }
   else
   {
      printf("%c is not an alphabet.\n", ch);
   }
   return 0;
}