#include <stdio.h>

struct Student {
    char studentName[50];
    char rollNo[20];
    int totalMarks;
};

void readStud(struct Student *student) {
    printf("Enter student's name: ");
    scanf("%s", student->studentName);
    
    printf("Enter student's roll number: ");
    scanf("%s", student->rollNo);
    
    printf("Enter total marks obtained: ");
    scanf("%d", &student->totalMarks);
}
void displayStud(struct Student student) {
    printf("\nStudent Details:\n");
    printf("Name: %s\n", student.studentName);
    printf("Roll Number: %s\n", student.rollNo);
    printf("Total Marks: %d\n", student.totalMarks);
}

int main() {
    struct Student student;
    readStud(&student);
    displayStud(student);

    return 0;
}
