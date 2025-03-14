#include<stdio.h>
#include<conio.h>
int main()
{
    float Fahreneit=0.0,Celsius=0;

    printf("\n Enter Temprature in Fahreneit => ");
    scanf("%f",&Fahreneit);

    Celsius =((Fahreneit-32)*(5.0/9.0));

    printf("\n Temprature in Fahreneit %0.2f = %0.2f",Fahreneit,Celsius);

    getch();
    return 0;
}
