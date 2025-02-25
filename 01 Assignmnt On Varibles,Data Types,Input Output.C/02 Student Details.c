#include<stdio.h>
#include<conio.h>
int main()
{
    int RNo;
    char Name,Course,City;

    printf("\n Enter Name of Student =>");
    scanf("%s",&Name);

    printf("\n\n Enter Roll Number of Student =>");
    scanf("%d",&RNo);

    printf("\n\n Enter Course of Student =>");
    scanf("%s",&Course);

    printf("\n\n Enter City of Student  =>");
    scanf("%s",&City);

    printf("\n Name of Student is = %s",Name);
    printf("\n Roll Number of Student is = %d",RNo);
    printf("\n Course of Student is = %s",Course);
    printf("\n City of Student is = %s",City);

    getch();
    return 0;
}
