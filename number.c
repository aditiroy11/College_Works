#include<stdio.h>
int main()
{
    int num,rem,temp,count=0;
    printf("input a number:");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        count++;
        temp=temp/10;
    }
    printf("the number of digits in %3d is %3d\n",num,count);
    return 0;
}