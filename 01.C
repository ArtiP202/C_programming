#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

struct Stud
{
    int Roll_No;
    char Name[40];
    int Phy;
    int Chem;
    int Maths;
    float Total;
    float Per;
};
int main()
{
    struct Stud Std;

    printf("\n Enter Student Detail => \n");

    printf("\n Enter Student Roll Number :");
    scanf("%d",&Std.Roll_No);

    fflush(stdin);

    printf("\n Enter Student Name:");
    gets(Std.Name);

    printf("\n Enter Student Physics Marks:");
    scanf("%d",&Std.Phy);

    printf("\n Enter Student Chemistry Marks:");
    scanf("%d",&Std.Chem);

    printf("\n Enter Student Maths Marks:");
    scanf("%d",&Std.Maths);

    getch();
    return 0;
}
