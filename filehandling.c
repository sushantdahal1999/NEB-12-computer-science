//Write a C program to create a text file named "students.txt" and store information (Name, Roll Number, Marks) for five students.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    FILE *fptr;
    int i;

    // Open file in write mode
    fptr = fopen("students.txt", "w");
 

    // Input student details
    for (i = 0; i < 5; ++i) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter roll number of student %d: ", i + 1);
        scanf("%d", &s[i].roll);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &s[i].marks);

        // Write to file
        fprintf(fptr, "Name: %s\n", s[i].name);
        fprintf(fptr, "Roll Number: %d\n", s[i].roll);
        fprintf(fptr, "Marks: %.2f\n\n", s[i].marks);
    }

    fclose(fptr);
    printf("Data successfully written to students.txt\n");
    return 0;
}
