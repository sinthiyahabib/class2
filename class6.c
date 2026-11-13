#include<stdio.h>
int main()
{
     int i,n;
     int sum=0;
     printf("Enter your number:");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
          {
               if(n%2==0)
               printf("Even number.");
               sum=sum+i;

          }
          printf("Sum = %d",sum);

          return 0;
}

