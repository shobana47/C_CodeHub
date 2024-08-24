#include<stdio.h>
int main()
{
int a=100,b=188;
int *var=&a,*var1=&b;
printf("%d\n",var);
printf("%d\n",var1);
printf("%d\n",a);
printf("%d\n",b);
if(*var1>*var)
    printf("%d\n b is greater",a);
else
    printf("%d\n a is greater",b);
}
