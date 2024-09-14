#include <stdio.h>

int main() {
    int subjects = 5;  // Number of subjects
    float marks[5], total = 0, percentage;
    int i;
    char grade;

    // Taking input for marks
    printf("Enter marks for 5 subjects (out of 100): \n");
    for(i = 0; i < subjects; i++) {
        printf("Subject %d: ", i+1);
        scanf("%f", &marks[i]);
        total += marks[i];  // Adding marks to the total
    }

    // Calculating percentage
    percentage = (total / (subjects * 100)) * 100;

    // Determining grade based on percentage
    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // Displaying the result
    printf("\nTotal Marks: %.2f / 500\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
