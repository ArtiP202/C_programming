#include<stdio.h>
#include<conio.h>

int Add(int, int)

int main()
{
    static char ch ;
    register int No;
    static float fNum;

    printf("\n Value of No = %d",No);
    printf("\n Value of ch = %c",ch);
    printf("\n Value of No = %f",fNum);

    getch();
    return 0;
}

int Add(int N1, int N2)
{
    auto int sum = 0;
    sum = N1 + N2;
    return sum;
}
