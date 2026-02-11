#include<stdio.h>
#include<conio.h>

void VowelConsonantCount(char*,int*,int*,int*);

int main()
{
    char cSrc[20]={'\0'};
    int vCnt=0,cCnt=0,oCnt=0;

    printf("Enter a String =>");
    gets(cSrc);

    VowelConsonantCount(cSrc,&vCnt,&cCnt,&oCnt);

    printf(" \n Vowel Count in given String is => %d",vCnt);
    printf(" \n Consonant Count in given String is => %d",cCnt);
    printf(" \n Other Letters Count in given String is => %d",oCnt);
}
void VowelConsonantCount(char*Src,int*V,int*C,int*O)
{
  int i=0;

  while(Src[i] !='\0')
     {
        if(Src[i] == 'a' || Src[i] == 'e' || Src[i] == 'i' || Src[i] == 'o' || Src[i] == 'u' || Src[i] == 'A' || Src[i] == 'E' || Src[i] == 'I' || Src[i] == 'O' || Src[i] == 'U')
        {
            (*V)++;
        }
         else if((Src[i] >= 'A' && Src[i] <= 'Z') || (Src[i] >= 'a' && Src[i] <= 'z'))
        {
            (*C)++;
        }
         else
        {
            (*O)++;
        }
        i++;
     }
     return;
}
