#include<stdio.h>
#include<conio.h>
int main()
{
  int i,Bill[5]={},SrchI=0;

  printf(" \n Todays Bills are =>");

    for(i=0;i<5;i++)
     {
        printf("\n The Bill of %d =  ",i+1);
        scanf("%d",& Bill[i]);
     }
     getch();

  printf("\n Enter Bill Ammount to Search Index => ");
  scanf("%d",&SrchI);

     for( i=0 ; i<5 ; i++ )
      {
        if( SrchI == Bill[i] )
          {
            break;
          }
      }
      if ( i< 5 )
      {
       printf("\n The Bill %d Found Ammount of Index %d ",SrchI,i);
      }
       else
       {
           printf(" \n No such Bill Found ");
       }

   getch();
  return 0;

}
