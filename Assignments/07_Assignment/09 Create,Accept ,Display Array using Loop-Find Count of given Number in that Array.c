#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,Num[5]={0};

    printf("\n Find The Number is Even or Odd");

    for(i=0;i<5;i++)
    {
        printf("Enter First Number = %d",i+1);
        scanf("%d",&Num[i]);

    if(Num[i] % 2 = 0)
       {
         printf("The Number is Even");
       }
      else
       {
         printf("The Number is Odd");
       }
    }


    getch();
    return 0;
}

