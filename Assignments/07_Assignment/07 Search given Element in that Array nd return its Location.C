#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,Bill[7]={0},SrchNo=0;

    printf("\n Enter Todays Bills=>");

    for(i=0;i<7;i++)
    {
       printf("\n The Bill of %d=",i+1);
       scanf("%d",&Bill[i]);
    }

    printf("\nThe Ammount of Search No is=>");
    scanf("%d",&SrchNo);

    for(i=0;i<0;i++)
    {
        if(SrchNo==Bill[i])
        {
            break;
        }
    }
   if (i < 7)
        {
          printf("\nBill %d found in Index %d",SrchNo,i);
        }
        else
        {
          printf("\n No such Bill found.");
        }
    getch();
    return 0;

}
