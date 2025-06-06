#include<stdio.h>
#include<conio.h>
int main()
{
    int No1=0,No2=0,i=0;

    printf("\n Enter First Number => ");
    scanf("%d",&No1);
    printf("\n Enter Second Number => ");
    scanf("%d",&No2);

    for(i=1;i<=No2;i++)
    {
        printf("\n %d ",No1);
    }
    getch();
    return 0;
}
