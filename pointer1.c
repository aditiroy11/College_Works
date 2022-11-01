#include<stdio.h>
int main()
{
    int a, *iptr;
a=5;
iptr =&a;
printf("normal var stores:%d at a location:0x%X\n",a,&a);
printf("pointer var stores:0x%X at a location:0x%X\n",iptr,&iptr);
printf("using pointer to access the value of a normal var:%d\n",*iptr);
a +=10;
printf("using pointer to access the value of a normal var <after update>:%d\n",*iptr);
*iptr = *iptr + 10;
printf("normal var stores:%d at a location:0x%X\n",a,&a);
return 0;
}