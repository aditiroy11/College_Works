#include<stdio.h>
int main()
{
    int num[100],n,i;
    printf("how many number");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    int mini=num[0];
    for (i=0;i<n;i++)
    {
        if (mini>num[i])
        mini=num[i];
    }
    printf("minimum:%d",mini);
    return 0;
}