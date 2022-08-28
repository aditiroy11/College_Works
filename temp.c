#include<stdio.h>
int main()
{
    float c,f;
    printf("input temp. in clecius\n");
    scanf("%f",&c);
    f=(9/5)*c+32;
    printf("%2f c is coverted to %2f F",c,f);
    return 0;
}