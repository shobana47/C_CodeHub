#include<stdio.h>
int main()
{
int rows,i,j,num=1;
printf("enter the rows:");
scanf("%d",&rows);
for(i=1;i<=rows;i++)
{ num=(i%2==0)?2:1;
for(j=1;j<=i;j++)
{
printf("%d",num);
num+=2;
}
printf("\n");
}
return 0;
}
