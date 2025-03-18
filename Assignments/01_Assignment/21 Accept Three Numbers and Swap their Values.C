#include<stdio.h>
#include<conio.h>
int main()
{
    int No1=0, No2=0, No3=0 ,Temp=0;

    printf("\n Enter First Number => ");
    scanf("%d",&No1);
    printf("\n Enter Second Number => ");
    scanf("%d",&No2);
    printf("\n Enter Third Number => ");
    scanf("%d",&No3);

    printf("\n Before Swap First Number=%d,Second Number=%d,Third Number=%d ",No1,No2,No3);

    Temp=No1;
    No1=No3;
    No3=No2;
    No2=Temp;

    printf("\n After Swap First Number=%d,Second Number=%d,Third Number=%d ",No1,No2,No3);

    getch();
    return 0;

}
