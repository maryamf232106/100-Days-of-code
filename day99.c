#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student *s;

    // Allocate memory dynamically
    s = (struct Student *)malloc(sizeof(struct Student));
    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input details
    printf("Enter student details:\n");
    printf("Name: ");
    fgets(s->name, sizeof(s->name), stdin);
    s->name[strcspn(s->name, "\n")] = '\0';

    printf("Roll: ");
    scanf("%d", &s->roll);

    printf("Marks: ");
    scanf("%f", &s->marks);

    // Print details
    printf("\nStudent Details:\n");
    printf("Name: %s | Roll: %d | Marks: %.0f\n", s->name, s->roll, s->marks);

    // Free dynamically allocated memory
    free(s);

    return 0;
}
