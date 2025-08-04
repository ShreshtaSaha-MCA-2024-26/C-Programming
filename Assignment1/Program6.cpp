// Write a C program to evaluate the algebraic expression (ax+b)/(ax-b).

#include <stdio.h>
int main()
{
     float a, b, x, result;
     printf("\n\n***C program to evaluate the algebraic expression (ax+b)/(ax-b)*\n");
     printf("Name: Shreshta Saha, Class: MCA1B, Roll-40\n\n");
     printf("Enter the values of a, b, and x:\n");
     scanf("%f %f %f", &a, &b, &x);
     if (a*x-b==0)
     {
          printf("Error: Division by zero is not allowed.\n");
     }
     else
     {
          result=(a*x+b)/(a*x-b);
          printf("The result of the expression (ax+b)/(ax-b) is: %.2f\n", result);
     }
     return 0;
}