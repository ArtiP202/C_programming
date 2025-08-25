#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,Bill[7]={};

    printf("\ntodays Bill is=>");

    for(i=0;i<7;i++)
    {
        printf("\nEnter Bill No %d=>",i+1);
        scanf("%d",&Bill);
    }
    getch();
    return 0;

}
