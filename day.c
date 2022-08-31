#include<stdio.h>
int main()
{
    int day;
    printf("input day number to  get the number");
    scanf("%d",&day);
      
    if(day==1)
    printf("monday\n");
    else if(day==2)
    printf("tuesday\n");
    else if(day==3)
    printf("wednesday\n");
    else if(day==4)
    printf("turs\n");
    else if(day==5)
    printf("fri\n");
    else if(day==6)
    printf("sat\n");
    else if (day==7)
    printf("sun\n");
    else printf("invalid day number!!\n");
    return 0;
}