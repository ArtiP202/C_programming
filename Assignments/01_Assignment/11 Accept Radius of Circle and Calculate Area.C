#include<stdio.h>
#include<conio.h>
int main ()
{
    float Radius=0,PI=3.14,Area=0;

    printf("\n Enter a Radius of Circle => ");
    scanf("%f",&Radius);

    Area=PI*Radius*Radius;

    printf("\n Area of Circle is =%f",Area);

    getch();
    return 0;
}
