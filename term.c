#include<stdio.h>
#include<math.h>
int main()
{
    int term,count,n;//2^0
    printf("how many terms:");
    scanf("%d",&n);
    count=0;
    while (count<n){
        term=pow(2,count);
        printf("%3d,",term);
        count++;
    }
    printf("\n");
    return 0;
    
}