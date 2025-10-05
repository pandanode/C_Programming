#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("student.txt", "w"); // open file for writing

    if (fptr == NULL) {  // always good to check if file opened successfully
        printf("Error opening file!\n");
        return 1;
    }

    char name[100];
    int age;
    float cgpa;

    printf("Enter the name: ");
    scanf(" %[^\n]", name);   // reads full line (name with spaces)

    printf("Enter the age: ");
    scanf("%d", &age);

    printf("Enter the cgpa: ");
    scanf("%f", &cgpa);

    fprintf(fptr, "Student Name: %s\n", name);
    fprintf(fptr, "Age of the student: %d\n", age);
    fprintf(fptr, "CGPA of the student: %.2f\n", cgpa);

    fclose(fptr); // close the file

    printf("Student details saved to student.txt\n");

    return 0;
}
