#include<stdio.h>
#include<conio.h>
int main()
{
    int No1=0,No2=0,Mul=0;

    printf("\n ******MULTIPLICATION***** ");

    printf("\n\n Enter First Number => ");
    scanf("%d",&No1);
    printf("\n Enter Second Number => ");
    scanf("%d",&No2);

    Mul=No1*No2;

    printf("\n Multiplaction of %d And %d is => %d ",No1,No2,Mul);

    getch();
    return 0;
}
