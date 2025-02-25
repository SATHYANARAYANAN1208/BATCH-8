#include <stdio.h>

// Define a structure for student
typedef struct {
    int student_id;
    char name[100];
    char email[100];
} Student;

// Function to elicit requirements
void elicit_requirements(Student *student) {
    printf("Enter student ID: ");
    scanf("%d", &student->student_id);
    printf("Enter name: ");
    scanf("%s", student->name);
    printf("Enter email: ");
    scanf("%s", student->email);
}

// Function to develop test cases
void develop_test_cases(Student *student) {
    // Test case 1: Validate student ID
    if (student->student_id <= 0) {
        printf("Error: Invalid student ID\n");
    }

    // Test case 2: Validate name
    if (strlen(student->name) == 0) {
        printf("Error: Name cannot be empty\n");
    }

    // Test case 3: Validate email
    if (strlen(student->email) == 0) {
        printf("Error: Email cannot be empty\n");
    }
}

int main() {
    Student student;

    // Elicit requirements
    elicit_requirements(&student);

    // Develop test cases
    develop_test_cases(&student);

    return 0;
}