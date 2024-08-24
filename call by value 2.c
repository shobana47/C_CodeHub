#include<stdio.h>
void call(int x,int y);
void main()
{
int a,b;
printf("enter the value:");
scanf("%d %d",&a,&b);
call(int a,int b);
printf("before swapping:%d %d",a,b);
}
void call(int x,int y)
{
int temp;
temp=a;
a=b;
b=temp;
printf("after swapping:%d %d",a,b);
}
