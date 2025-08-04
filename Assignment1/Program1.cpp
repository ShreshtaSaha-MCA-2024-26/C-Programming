// Write a C program to find the sum and average of three numbers.

#include<stdio.h>
int main()
{
        int a, b, c, sum = 0;
        double avg = 0;
        printf("\n****Program to find the sum and average of three numbers****\n");
        printf("Name: Shreshta Saha, Class: MCA1B, Roll: 40\n\n");
        printf("Enter three numbers:\n");
        scanf("%d %d %d", &a, &b, &c);
        sum = a + b + c;
        avg = sum / 3.0;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", avg);
        return 0;
}
