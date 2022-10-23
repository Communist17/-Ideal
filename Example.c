#include<stdio.h>
#include<math.h>
int main ()
{
int a,b,c;
float s,area;
printf("请输入三角形的三条边 a,b,c:");
scanf("%d,%d,%d",&a,&b,&c);
if(a+b>c&&a+c>b&&b+c>a)
{
    s=1.0/2*(a+b+c);
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("三角形面积为:%.2f\n",area);
}
else
printf("不能构成三角形!\n");
return 0;
}