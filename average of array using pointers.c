#include <stdio.h>
int main()
{
int n;
float sum = 0.0, average;
printf("Enter the number of elements in the array: ");
scanf("%d", &n);
int arr[n];
printf("Enter %d integers:\n", n);
for(int i = 0; i < n; i++)
{
scanf("%d", &arr[i]);
}
int *ptr = arr;
for(int i = 0; i < n; i++)
{
sum += *(ptr + i);
}
average = sum / n;
printf("The average of the array elements is: %.2f\n", average);
return 0;
}
