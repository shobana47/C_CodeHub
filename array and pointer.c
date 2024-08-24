#include<stdio.h>
 int main()
 {
 int n=5,i;
 int arr[]={11,12,13,14,15};
 int* var;
 var=arr;
 for(int i=0;i<n;i++)
 printf("%d\n",&var[i]);
 var++;

 }
