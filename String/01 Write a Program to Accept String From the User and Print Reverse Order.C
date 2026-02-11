#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char Hello[20]="Hello World";

    strrev(Hello);

    printf("\n String => %s",Hello);

    getch();
    return 0;
}
