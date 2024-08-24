#include<stdio.h>
void funname(int*,int*);
void main()
{
int x=111,y=2024;
funname(&x,&y);
printf("before swapping:%d %d",x,y);
}
void funname(int *x,int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
printf("after swapping:%d %d",*x,*y);
}
