#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0;

    printf("\n Enter a Number=>");
    scanf("%d",&No);

    if(No > 0)
    {
        printf("\n Number is Possitive");
    }
    else if(No < 0)
    {
        printf("\n Number is Negative");
    }
    else
    {
        printf("\n Invalid Input");
    }

    getch();
    return 0;
}
