#include<stdio.h>
#include<conio.h>
int main()
{
    char ch='\0';

    printf("\n Enter a Character ");
    scanf("%c",&ch);

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("\n Character %c is Vowel ",ch);
    }
    else if(ch > 'A' && ch<'Z' || ch>'a' && ch<'z' )
    {
         printf("\n Character %c is Consonent ",ch);
    }
    else
    {
        printf("\n Character %c is other ",ch);
    }
    getch();
    return 0;
}
