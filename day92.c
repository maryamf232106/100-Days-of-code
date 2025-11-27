#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    // Input details of 5 students
    for (i = 0; i < 5; i++) {
        printf("Enter details of student %d:\n", i + 1);

        printf("Name: ");
        getchar();  // To clear newline left by previous input
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        printf("\n");
    }

    // Output – Print all records in tabular form
    printf("\n--- Student Details ---\n");
    printf("Name\t\tRoll\tMarks\n");
    printf("-------------------------------\n");

    for (i = 0; i < 5; i++) {
        printf("%-15s %-5d %.2f\n", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}
