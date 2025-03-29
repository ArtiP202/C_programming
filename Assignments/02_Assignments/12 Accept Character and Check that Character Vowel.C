#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;

    printf("\n Enter a Character => ");
    scanf("%c",&ch);

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("\n Character %c is Vowel ",ch);
    }
    else
    {
         printf("\n Character %c is Not Vowel ",ch);
    }

    getch ();
    return 0;
}
