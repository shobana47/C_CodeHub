#include<stdio.h>
int bubblesort(int arr[],int n)
{
int i,j,temp;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
}
int main()
{
int arr[]={13,78,90,89,67};
int n=sizeof(arr)/sizeof(arr[0]);
int i;
printf("array before sorting:\n");
for(i=0;i<n;i++)
{
printf("%d\t", arr[i]);
}
bubblesort(arr,n);

printf("\narray after sorting:\n");
for(i=0;i<n;i++)
{
printf("%d\t", arr[i]);
}
return 0;
}
