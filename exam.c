    #include <stdio.h>
    int main()
    {
        struct student
        {
            int rollno;
            char name[100];
            int marks[3];
        };
        int main()
    {
        struct student s;
        int i;
        printf("enter the name:");
        printf("enter the roll no:");
        for(int i=0;i<5;i++)
        {

        scanf("%s",&s.name);
        scanf("%d",&s.rollno);
        }
        printf("enter the three subject marks:");
        for(i=0;i<3;i++)
        {
            scanf("%d",&s.marks[i]);
        }
        printf("student details:");
        for(i=0;i<5;i++)
        {
        printf("name:%s",s.name);
        printf("rollno:%d",s.rollno);
        }
        for(i=0;i<3;i++)
        {
            printf("marks[%d]:%d\n",i+1,s.marks[i]);
        }
        return 0;
    }
    }
