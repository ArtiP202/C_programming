#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0;

    printf("\n Enter a Number => ");
    scanf("%d",& No);

    if(No%2==0)
     {
        printf("\n Number is Even");
     }
    else
     {
          printf("\n Number is Odd");
     }

    getch();
    return 0;
}
