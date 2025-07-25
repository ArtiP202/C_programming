#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='\0';

    printf("\n Print Letter H to N \n\n");

    for(ch='H';ch<='N';ch++)
    {
        printf(" %c",ch);
    }
    getch();
    return 0;
}
