#include<stdio.h>
#include<conio.h>
int main()
{
  char ch ='\0';

  printf("\n Enter a Character => ");
  scanf("%c",&ch);

  printf("\n Decimal => %d",ch);
  printf("\n Octl => %o",ch);
  printf("\n Hexadecimal => %X",ch);

  getch();
  return 0;

}
