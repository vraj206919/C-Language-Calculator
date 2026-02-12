#include <stdio.h>

int main()
{

    int mark;

    printf("\n Enter your Mark : - ");

    scanf("%d", &mark);

    if (mark >= 90)
    {
        printf("\n Congratulation's You have Achieved A grade.");
    }
    else if (mark >= 80)
    {
        printf("\n You have Achieved B grade.");
    }

    else if (mark >= 70)
    {
        printf("\n You have Achieved C grade.");
    }
    else if (mark >= 60)
    {
        printf("\n You have Achieved D grade.");
    }
    else if (mark >= 35)
    {
        printf("\n You have Achieved E grade");
    }
   else
   {
    printf("you are Failed");
   }
    return 0;
}