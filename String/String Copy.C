#include<stdio.h>
#include<conio.h>

int strcpyF(char*,char*);

int main()
{
    char cSrc[20]="",cDest[20]="";
    int Cnt=0;


    printf("\n Enter a Source String => ");
    gets(cSrc);


    Cnt=strcpyF(cDest,cSrc);

    printf("\n Source String is => %s ",cSrc);
    printf("\n Destination String is => %s",cDest);

    printf("\n Total Letters Copied are = %d ",Cnt);

    getch();
    return 0;
}
int strcpyF(char*Dest,char*Src)
{
   int i=0;

   while(Src[i] != '\0')
      {
       Dest[i] = Src[i];
       i++;
      }
      Dest[i]='\0';

      return i;
}

