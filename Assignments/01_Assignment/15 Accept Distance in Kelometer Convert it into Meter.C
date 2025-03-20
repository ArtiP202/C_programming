#include<stdio.h>
#include<conio.h>
int main()
{
    float Meter=0.0,KeloMeter=0.0;

    printf("\n Enter Distance in KeloMeter => ");
    scanf("%f",&KeloMeter);

    Meter=KeloMeter*1000;

    printf("\n %0.2f KeloMeter is equal to %0.2f Meter",KeloMeter,Meter );

    getch();
    return 0;
}
