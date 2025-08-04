// Write a C program to check whether a given number is an Armstrong number or not.

#include <stdio.h>
#include <math.h>
int main()
{
    int num, originalNum, remainder, result = 0, n = 0;
    printf("\n\n***C program to check whether a given number is an Armstrong number or not* \n");
    printf("Name: Shreshta Saha, Class MCA1B, Roll-40\n");
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;
    while (originalNum != 0)
    {
        originalNum /= 10;
        ++n;
    }
    originalNum = num;
    while (originalNum != 0)
    {
        remainder=originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
    if (result == num)
    printf("%d is an Armstrong number.", num);
    else
    printf("%d is not an Armstrong number.", num);
    return 0;
}