#include <stdio.h>

struct student
 {
    int roll_no;
    char name[50];
    int marks[3];
};
int main() {
    struct student s;
    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter marks for three subjects:\n");
    for (int i = 0; i < 3; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &s.marks[i]);
    }
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", s.roll_no);
    printf("Name: %s\n", s.name);
    printf("Marks:\n");
    for (int i = 0; i < 3; i++) {
        printf("Subject %d: %d\n", i + 1, s.marks[i]);
    }

    return 0;
}
