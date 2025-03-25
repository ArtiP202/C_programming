#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0;

    printf("\n Enter a Number => ");
    scanf("%d",&No);

    if((No%7==0)&&(No%5==0))
    {
        printf("\n Number %d is Divisible By  7 and 5",No);
    }
    else
    {
         printf("\n Number %d is not Divisible By 7 and 5",No);
    }
    getch();
    return 0;
}
