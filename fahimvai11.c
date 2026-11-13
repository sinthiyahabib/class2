#include<stdio.h>
int main()
{
    int time, alarm;

    printf("Enter wake-up time: ");
    scanf("%d", &time);


    if(time < 8)
    {
          printf("Do you have an alarm? (1=Yes, 0=No): ");
          scanf("%d", &alarm);

        if(alarm == 1)
        {
            printf("Good Student!");
        }
        else
        {
            printf("Lucky Student!");
        }
    }
    else
    {
        printf("Oops! You Missed Your Class!");
    }

    return 0;
}
