#include<stdio.h>
#include<conio.h>
int main()
{
    int No1=0,No2=0,Add;
    printf("\nAddition of Two Numbers ");

    printf("\n\n Enter First Number is =>");
    scanf("%d",&No1);
    printf("\n Enter Second Number is =>");
    scanf("%d",&No2);

    Add=No1+No2;

    printf("\n Result => \n Addition of %d and %d = %d",No1,No2,Add);

    getch();
    return 0;
}
