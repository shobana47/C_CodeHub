#include<stdio.h>
int main()
{
int a=11,*var=&a;
printf("%d\n",var);
printf("%d\n",a);
printf("%d\n",&a);
printf("%d\n",*var);
*var=100;                     //updation
printf("%d\n",a);
var++;                       //increment
printf("%d\n",var);
var--;                        //decreament
printf("%d\n",var);
printf("%d\n",var+1);         //addition
printf("%d\n",var+5);
printf("%d\n",var-10);
}
