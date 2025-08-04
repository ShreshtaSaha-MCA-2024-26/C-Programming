// Write a C program to check if a given number is a strong number.

#include <stdio.h>

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int number, temp, digit, sum = 0;
    printf("\n\n***C program to check if the given number is a strong number*\n");
    printf("Name: Shreshta Saha, Class: MCA1B, Roll-40\n\n");
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    temp = number;
    while (temp > 0)
    {
        digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }
    if (sum == number)
    printf("%d is a strong number.\n", number);
    else
    printf("%d is not a strong number.\n", number);
    return 0;
}