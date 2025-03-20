#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int No=0,SqureRoot=0;

    printf("\n Enter a Number => ");
    scanf("%d",&No);

    SqureRoot = sqrt(No);

    printf("\n Squre Root of %d is => %d",No,SqureRoot);

    getch();
    return 0;
}
