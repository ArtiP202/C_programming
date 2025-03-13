#include<stdio.h>
#include<conio.h>
int main()
{
    float Side=0,Area_of_Square=0;

    printf("\n Enter Side Lenght of Square => ");
    scanf("%f",&Side);

    Area_of_Square=Side*Side;

    printf("\n Area of Square => %f ",Area_of_Square);

    getch();
    return 0;
}
