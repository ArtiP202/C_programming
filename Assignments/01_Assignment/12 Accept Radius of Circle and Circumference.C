#include<stdio.h>
#include<conio.h>
int main()
{
    float Radius=0.0,Circumference=0.0,PI=3.14;

    printf("\n Enter Radius of Circle => ");
    scanf("%f",&Radius);

    Circumference=2*PI*Radius;

    printf("\n Circumference of Circle is = %f",Circumference);

    getch();
    return 0;
}
