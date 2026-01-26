#include<stdio.h>
#include<conio.h>

int Book_Read();

int main()
{
    int R_Pages = 0, Total_Pages = 0, Day_Cnt = 0;

    printf("Enter Total Number of Pages");
    scanf("%d",&Total_Pages);

    for(Day_Cnt = 0; R_Pages < Total_Pages ; Day_Cnt++)
    {
        R_Pages = Book_Read();
        printf("\n Pages Read By Day %d = %d",Day_Cnt+1, R_Pages);
        getch();
    }
    printf("\n Congrats u are completed a group");

    getch();
    return 0;
}

int Book_Read()
{
    int Res = 10;
    int PCnt = 0;

    printf("\n\n How Many Pages Read Today : ");
    scanf("%d",&PCnt);

    Res = Res + PCnt;

    return Res;
}
