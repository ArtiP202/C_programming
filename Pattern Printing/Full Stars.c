#include<stdio.h>
#include<conio.h>
int main()
  {
    int R=0,C=0;

    printf("\n****Pattern****\n");

    for(R=1;R<=5;R++)
       {
           for(C=1;C<=3;C++)
            {
              printf(" * ");
            }
       printf("\n");
       }
    printf("\n Thanks");
    getch();
    return 0;
   }
