#include<stdio.h>
int main()
{int a=10;
int *ptr=&a;
int **p=&ptr;
printf("%d\n",ptr);
printf("%d\n",*ptr);
printf("%d\n",a);
printf("%d\n",*a);
}
