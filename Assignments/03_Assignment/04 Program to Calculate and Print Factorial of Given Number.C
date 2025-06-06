#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0,Factorial=1,i=0;

    printf("\n Enter a Number => ");
    scanf("%d",&No);

    for(i=1;i<=No;i++)
    {
       Factorial=Factorial*i;
    }
    printf("\n Factorial of Given Number %d is %d",No,Factorial);

    getch();
    return 0;

}
