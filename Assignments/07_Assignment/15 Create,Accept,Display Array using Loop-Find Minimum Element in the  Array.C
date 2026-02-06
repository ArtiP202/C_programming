
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,Bill[5]={},Min=0;

    printf("\n Todays Bills are:");

    for(i=0;i<5;i++)
      {
        printf("\n The Bill of %d=",i+1);
        scanf("%d",&Bill[i]);
      }
    printf("\n *****Bills in Array ****");

    for(i=0;i<5;i++)
      {
          printf("\n Value of %d=%d",i+1,Bill[i]);

      if (i==0)
         {
            Min=Bill[i];
            continue;
         }
      else if(Bill[i]<Min)
         {
            Min=Bill[i];
         }
      }
    printf("\n The Minimum Amount in the Array is %d",Min);
    printf("\n==================================");


  }
