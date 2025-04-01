#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='\0';

    printf("\n Enter a Character=> ");
    scanf("%c",&ch);

    if(ch>='A'&& ch<='Z')
    {
        printf("\n The Character %c is Upper Case Character ",ch);
    }
    else if (ch>='a'&& ch<='z')
    {
        printf("\n The Character %c is Lower Case Character ",ch);
    }
    else
    {
      printf("\n %c is Not Character ");
    }
    getch();
    return 0;
}
