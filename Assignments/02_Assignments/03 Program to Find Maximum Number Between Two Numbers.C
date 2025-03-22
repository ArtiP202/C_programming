#include<stdio.h>
#include<conio.h>
int main()
{
    int No1=0,No2=0;

    printf("\n Enter First Number => ");
    scanf("%d",&No1);
    printf("\n Enter Second Number => ");
    scanf("%d",&No2);

    if(No1>No2)
    {
        printf("\n The Greater Number is %d ",No1);
    }
    else if(No1==No2)
    {
        printf("\n Numbers are Equal");
    }
    else
    {
        printf("\n The Greater Number is %d ",No2);
    }
    getch();
    return 0;
}
