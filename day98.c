#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

// Function to compare two students
int compareStudents(struct Student s1, struct Student s2) {
    if (strcmp(s1.name, s2.name) == 0 &&
        s1.roll == s2.roll &&
        s1.marks == s2.marks) {
        return 1; // Same
    } else {
        return 0; // Different
    }
}

int main() {
    struct Student s1, s2;

    // Input Student 1
    printf("Enter details for Student 1:\n");
    printf("Name: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    s1.name[strcspn(s1.name, "\n")] = '\0';
    printf("Roll: ");
    scanf("%d", &s1.roll);
    printf("Marks: ");
    scanf("%f", &s1.marks);

    getchar(); // clear newline before reading next string

    // Input Student 2
    printf("\nEnter details for Student 2:\n");
    printf("Name: ");
    fgets(s2.name, sizeof(s2.name), stdin);
    s2.name[strcspn(s2.name, "\n")] = '\0';
    printf("Roll: ");
    scanf("%d", &s2.roll);
    printf("Marks: ");
    scanf("%f", &s2.marks);

    // Compare
    if (compareStudents(s1, s2)) {
        printf("\nSame\n");
    } else {
        printf("\nDifferent\n");
    }
