// Write a C program to find the sum of individual digits of a given positive integer.

#include<stdio.h>
int main()
{
      int n,sum=0,digit;
      printf("\n****Program to find the sum of individual digits of a given positive integer****\n");
      printf("Name: Shreshta Saha, Class: MCA1B, Roll: 40\n");
      printf("Enter a Positive Integer Number :");
      scanf("%d",&n);
      while(n!=0)
      {
            digit=n%10;
            sum+=digit;
            n/=10;
      }
      printf("Sum of digits = %d\n",sum);
      return 0;
}