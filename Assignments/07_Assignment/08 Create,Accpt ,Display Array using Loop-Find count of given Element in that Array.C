
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define BillCount 5
int main()
{
    int i=0,Bill[BillCount]={0};
    printf("\n Enter Todays Bills...");

    for(i=0;i<BillCount;i++)
    {
        printf("\n Enter Bill No %d=",i+1);
        scanf("%d",&Bill[BillCount]);
    }
    getch();
    return 0;
}
