#include<stdio.h>
#include<conio.h>
int main()
{
    int M1=0,M2=0,M3=0,Total=0;
    float Per=0.0;

    printf("\n Mark of 1st No : ");
    scanf("%d",&M1);
    printf("\n Mark of 2nd No : ");
    scanf("%d",&M2);
    printf("\n Mark of 3rd No : ");
    scanf("%d",&M3);

    Total=M1+M2+M3;
    Per=Total/3;

    printf("\n Total of Marks : %d ",Total);
    printf("\n Percenage of Marks : %f",Per);

   getch();
   return 0;
}
