#include<stdio.h>
int main()
{
    int num,rem;
    printf("input a number:");
    scanf("%d",&num);
    printf("the digit in %3d are:",num);
    while(num!=0)
{
    rem=num%10;
    printf("%d,",rem);
    num=num/10;
}
printf("\n");
return 0;
}