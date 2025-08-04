// Write a C program to generate the first 'n' terms of the Fibonacci sequence.

#include<stdio.h>
int main()
{
      int n,i,t1=0,t2=1,nextTerm;
      printf("\n**program to generate the first n terms of the Fibonacci sequence.**\n");
      printf("Name: Shreshta Saha, Class: MCA1B, Roll: 40\n");
      printf("Enter the number of terms : ");
      scanf("%d",&n);
      printf("Fibonacci Series:%d %d ", t1, t2);
      nextTerm=t1+t2;
      for(int i=3;i<=n;++i)
      {
            printf("%d ",nextTerm);
            t1=t2;
            t2=nextTerm;
            nextTerm=t1+t2;
      }
      return 0;
}