#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void readstud(char nameOfStudents[10][50]) {
    int i = 0;

    while (i < 10 && scanf("%s", nameOfStudents[i]) != EOF) {
        i++;
    }
}

void sortstud(char nameOfStudents[10][50]) {
    int i, j;
    char temp[50];

    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 10; j++) {
            if (strcmp(nameOfStudents[i], nameOfStudents[j]) > 0) {
                strcpy(temp, nameOfStudents[i]);
                strcpy(nameOfStudents[i], nameOfStudents[j]);
                strcpy(nameOfStudents[j], temp);
            }
        }
    }
}

void dispstud(char nameOfStudents[10][50]) {
    int i;

    printf("Sorted Student Names:\n");
    for (i = 0; i < 10; i++) {
        printf("%s\n", nameOfStudents[i]);
    }
}

int main() {
    char nameOfStudents[10][50];

    readstud(nameOfStudents);
    sortstud(nameOfStudents);
    dispstud(nameOfStudents);
    return 0;
}
