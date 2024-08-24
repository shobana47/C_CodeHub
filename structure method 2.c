#include<stdio.h>
struct employee
{
char name[10];
int id;
float salary;
char putupfrom[10];
}e1,e2;
void main()
{
strcpy(e1.name,"SHOBANA");
e1.id=23110047;
e1.salary=110000;
strcpy(e1.putupfrom,"POLLACHI");
strcpy(e2.name,"LILLY");
e2.id=235678;
e2.salary=167000;
strcpy(e2.putupfrom,"COIMBATORE");
printf("\t\tEMPLOYEE DETAILS\nEMPLOYEE 1:");
printf("\n\tname:%s\n\t",e1.name);
printf("id:%d\n\t",e1.id);
printf("salary:%f\n\t",e1.salary);
printf("putupfrom:%s\n\t",e1.putupfrom);
printf("\nEMPLOYEE 2:");
printf("\n\tname:%s\n\t",e2.name);
printf("id:%d\n\t",e2.id);
printf("salary:%f\n\t",e2.salary);
printf("putupfrom:%s\n\t",e2.putupfrom);
}
