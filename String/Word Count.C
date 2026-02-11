#include<stdio.h>
#include<conio.h>

int Word_Count(char*);

int main()
  {
      char cSrc[40]={'\0'};
      int wCnt=0;

      printf("\n Enter a String => ");
      gets(cSrc);

      wCnt=Word_Count(cSrc);

      printf("\n Word Count in given String is => %d ",wCnt);

      getch();
      return 0;
  }
int Word_Count(char*Src)
  {
      int i=0,Cnt=0;

      while(Src[i] != '\0')
     {
      while(Src[i] == ' ' || Src[i] == ','|| Src[i] == '.'|| Src[i] == '\t')
        {
            i++;
        }
       if(Src[i] = '\0')
       {
            Cnt++;
       }
       while(Src[i] != '\0' && Src[i] == ' ' && Src[i] == ',' && Src[i] == '.' && Src[i] == '\t' )
       {
           i++;
       }
     }
       return Cnt;
  }
