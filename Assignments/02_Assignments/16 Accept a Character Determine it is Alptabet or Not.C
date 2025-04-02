#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='\0';

    printf("\n Enter a Character => ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
      {
        printf("\n TRUE ");
      }
    else
      {
        printf("\n FALSE");
      }
    getch();
    return 0;
}
