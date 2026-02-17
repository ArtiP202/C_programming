#include<stdio.h>
#include<conio.h>
int main(){

  char Ept='\0',Spt='\0',ch='\0';

   printf("\n Enter Starting Element => ");
   scanf("%c",&Spt);

   fflush(stdin);

   printf("\n Enter Ending Element => ");
   scanf("%c",&Ept);

   if(Spt<Ept)
   {
    for(ch=Spt;Spt<=Ept;ch++)
    {
        printf("%c",ch);
    }
   }

   else
   {
    for(ch=Spt;Spt>=Ept;ch--)
    {
       printf("%c",ch);
    }
   }

   getch();
   return 0;
}
