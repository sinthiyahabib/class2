#include<stdio.h>
int main()
{
     char ch;
     printf("Input a character:");
     scanf(" %c",&ch);

     if(ch>='A' && ch<='Z')
     {
          printf("Upper Case.");
     }
     else if(ch>='a' && ch<='z')
     {
          printf("Lower Case.");
     }
     else
     {
          printf("NOt English Letter.");
     }
     return 0;
}
