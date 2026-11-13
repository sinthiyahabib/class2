#include<stdio.h>
int main()
{
     int n;
     int a,b,c;
     printf("Enter a,b,c,n:");
     scanf("%d%d%d%d",&a,&b,&c,&n);
   if (a*a*a+b*b*b+c*c*c==n)
   {
     printf("Armstrong Number");
   }
   else
     {
     printf("Not an armstrong Number");
     }

     return 0;

}
