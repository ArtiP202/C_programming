#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='0';

    printf("\n Print Letters W to E \n\n");

    for(ch='W';ch>='E';ch--)
    {
        printf(" %c",ch);
    }
    getch();
    return 0;
}
