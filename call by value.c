#include<stdio.h>
void funname(int a,int b);
void main()
{
int a=11,b=128;
funname(a,b);
printf("\nbefore swapping the values:\n%d %d",a,b);
}
void funname(int a,int b)
{
int temp;
temp=a;
a=b;
b=temp;
printf("after swapping the values:\n%d %d",a,b);
}
