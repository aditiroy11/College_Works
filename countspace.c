#include<stdio.h>
#include<string.h>
int main()
{
    //var dcl
    char str[100];
    int len;
    //scanf("%s",str);
    scanf("%[^\n]",str);
    len=strlen(str);
    printf("the legnth of %s is:%d\n",str,len);
    return 0;
}