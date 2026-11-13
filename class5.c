#include<stdio.h>
int main()
{
     int i,n;
     int sum=0;
     printf("Enter your number:");
     scanf("%d",&n);
     for(i=0;i<=n;i++)
          {
          sum=sum+i;

          }
          printf("Sum = %d",sum);

          return 0;
}
