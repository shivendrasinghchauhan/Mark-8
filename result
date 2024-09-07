#include <stdio.h>

#define MAX_STUDENTS 100
#define PASSING_SCORE 50

typedef struct {
    char name[50];
    int score;
} Student;

void inputStudentResults(Student students[], int *count) {
    printf("Enter the number of students: ");
    scanf("%d", count);

    for (int i = 0; i < *count; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter score for %s: ", students[i].name);
        scanf("%d", &students[i].score);
    }
}

void displayResults(const Student students[], int count) {
    printf("\nStudent Results:\n");
    printf("Name\t\tScore\tStatus\n");
    printf("------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%s\t\t%d\t%s\n", students[i].name, students[i].score,
               students[i].score >= PASSING_SCORE ? "Pass" : "Fail");
    }
}

void calculateAverage(const Student students[], int count) {
    if (count == 0) return;

    int total = 0;
    for (int i = 0; i < count; i++) {
        total += students[i].score;
    }

    double average = (double)total / count;
    printf("\nAverage Score: %.2f\n", average);
}

int main() {
    Student students[MAX_STUDENTS];
    int count = 0;

    inputStudentResults(students, &count);
    displayResults(students, count);
    calculateAverage(students, count);

    return 0;
}
