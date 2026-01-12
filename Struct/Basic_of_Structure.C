#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Stud {

    int RNo;
    char Name[40];
    long long int MobNo;
    float per;
};

int main(){

   struct Stud S1 = {15, " Shiv",8343878758,77.89};

   printf("\n Student Details");
   printf("\n ---------------- ***** -----------------");

   printf("\n Roll No     : %d",S1.RNo);
   printf("\n Name        : %s",S1.Name);
   printf("\n Mobile No   : %lld",S1.MobNo);
   printf("\n Percentage  : %f",S1.per);

   getch();
   return 0;
}
