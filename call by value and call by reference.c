#include <stdio.h>
void swapByValue(int x, int y)
 {
 int temp;
temp = x;
x = y;
y = temp;
printf("Inside swapByValue: x = %d, y = %d\n", x, y); } void swapByReference(int *x, int *y)
{
int temp;
temp = *x;
*x = *y;
*y = temp;
}
int main()
{
    int a, b;
printf("Enter two integers (a and b): ");
scanf("%d %d", &a, &b);
printf("Original values: a = %d, b = %d\n", a, b);     swapByValue(a, b);
printf("After swapByValue: a = %d, b = %d\n", a, b);     swapByReference(&a, &b);
 printf("After swapByReference: a = %d, b = %d\n", a, b);     return 0;
}

