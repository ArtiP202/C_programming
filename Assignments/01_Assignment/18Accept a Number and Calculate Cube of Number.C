
#include<stdio.h>
#include<conio.h>
int main()
{
    int Number=0,Cube;

    printf("\n Enter a Number => ");
    scanf("%d",&Number);

    Cube=Number*Number*Number;

    printf("\n Cube of Number is %d =%d",Number,Cube);

    getch();
    return 0;
}
