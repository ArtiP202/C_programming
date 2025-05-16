#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='\0';

    printf("\n Enter a Character => ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
    {
        ch=ch+32;
        printf("\n Toggle Case => %c",ch);
    }
    else if(ch>='a' && ch<='z')
    {
        ch=ch-32;
        printf("\n Toggle Case => %c",ch);
    }
    else
    {
        printf("\n Toggle Case => %c",ch);
    }
    getch();
    return 0;
}
