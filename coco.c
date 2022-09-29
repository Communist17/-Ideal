#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int  x , a, b;
    x=a*b;
    printf("please input 2 numbers:");
    scanf("%d %d",&a,&b);
    printf("%d\n",x=a*b);
    return 0;
}