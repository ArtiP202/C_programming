#include<stdio.h>
#include<conio.h>
int main()
{
    int Cnt=0,Bill_Sum=0,i=0;
    int *Bills=NULL;

    printf("\n Enter How Many Bills => ");
    scanf("%d",&Cnt);

    Bills=(int*)malloc(Cnt  sizeof(int));

    if (NULL==Bills)
      {
        printf("\n Memory Cant be Allocated ");
        return -1;
      }
    for(i=0;i<Cnt;i++)
      {
        printf("\n Enter Bill %d Ammount =>",i+1);
        scanf("%d",&Bills[i]);

        Bill_Sum=Bill_Sum+Bills[i];
      }
      getch();
      printf("\n Entered Bills and their Sum is =>");

      for(i=0;i<Cnt;i++)
      {
          printf("%d+",Bill[i]);
      }
      printf("\b %d",Bill_Sum);

      getch();
      return 0;
}
