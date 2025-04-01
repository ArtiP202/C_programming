#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='\0';

    printf("\n Enter a Character => ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
    {
        printf("\n Character %c is Upper Case",ch);
    }
    else if(ch>='a' && ch<='z')
    {
        printf("\n Character %c is Lower Case",ch);
    }
    else if(ch>='0' && ch<='9')
    {
        printf("\n Character %c is Digit",ch);
    }
    else
    {
      printf("\n Character %c is Special Symbol",ch);
    }
    getch();
    return 0;
}
