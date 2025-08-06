// Write a C program to find the maximum between two numbers.

#include <stdio.h>
int main()
{
   int numl, num2;
   printf("\n\n***C program to find the maximum between two numbers*\n");
   printf("Name: Shreshta Saha, Class: MCA1B, Roll-40\n\n");
   printf("Enter two integers:\n");
   scanf("%d %d", &numl, &num2);
   if (numl > num2)
   {
      printf("The maximum number is: %d\n", numl);
   }
   else if (num2 > numl)
   {
      printf("The maximum number is: %d\n", num2);
   }
   else 
   {
      printf("Both numbers are equal.\n");
   }
   return 0;
}
