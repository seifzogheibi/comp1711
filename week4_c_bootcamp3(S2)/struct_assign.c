#include <stdio.h>
#include <string.h>

struct student {
    char name [20];
    char student_id [11]; // Assuming up to 10 digits.
    unsigned mark;
};

int main () {
    struct student new_student;
    strcpy(new_student.name, "Name Surname");
    strcpy(new_student.student_id, "123456789");
    //new_student.mark=45
    printf("Enter final mark: ");
    scanf("%u", &new_student.mark);
    printf("Student name: %s\n", new_student.name);
    printf("Student ID: %s\n", new_student.student_id);
    printf("Final mark: %u\n", new_student.mark);
    return 0;
}