#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    FILE *fp;
    int n, i;

    printf("How many students? ");
    scanf("%d", &n);

    struct Student s[n];

    // Taking input from user
    for (i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%d", &s[i].marks);
    }

    // Writing to file
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        fprintf(fp, "%s %d %d\n", s[i].name, s[i].roll, s[i].marks);
    }

    fclose(fp);

    // Reading from file
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error reading file!\n");
        return 1;
    }

    printf("\n--- Student Records from File ---\n");

    struct Student temp;

    while (fscanf(fp, "%s %d %d", temp.name, &temp.roll, &temp.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", temp.name, temp.roll, temp.marks);
    }

    fclose(fp);

    return 0;
}
