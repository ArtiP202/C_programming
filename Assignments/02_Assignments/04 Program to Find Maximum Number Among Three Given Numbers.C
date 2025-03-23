#include<stdio.h>
#include<conio.h>
int main()
{
    int No1=0,No2=0,No3=0;

    printf("\n Enter First Number => ");
    scanf("%d",&No1);
    printf("\n Enter Second Number => ");
    scanf("%d",&No2);
    printf("\n Enter Third Number => ");
    scanf("%d",&No3);

    if(No1>No2&&No1>No3)
    {
        printf("\n The Greater Number is %d",No1);
    }
    else if(No2>No1&&No2>No3)
    {
        printf("\n The Greater Number is %d",No2);
    }
    else
    {
        printf("\n The Greater Number is %d",No3);
    }

    getch();
    return 0;

}
