#include<stdio.h>
int main()
{
     int n;
     printf("Enter the number:");
     scanf("%d",&n);

     if (n>0)
         {
          printf("Positive\n");
          if(n%2==0)
          {
               printf("Even\n");
          }
          else
          {
               printf("Odd\n");
          }
         }
     else if(n<0)
     {
          printf("Negative\n");
     }
     else
     {
          printf("Zero\n");
     }

     return 0;
}
