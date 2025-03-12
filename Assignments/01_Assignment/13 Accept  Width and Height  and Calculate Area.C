#include<stdio.h>
#include<conio.h>
int main()
{
    float Width=0, Height=0, Area=0;

    printf("\n Enter Height of Rectangle => ");
    scanf("%f",&Height);
    printf("\n Enter Width of Rectangle => ");
    scanf("%f",&Width);

    Area=Height*Width;

    printf("\n Area of Rectangle => %f",Area);

    getch();
    return 0;
}
