#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;

    // Taking input
    printf("Name: ");
    fgets(s.name, sizeof(s.name), stdin);

    // Remove trailing newline
    s.name[strcspn(s.name, "\n")] = '\0';

    printf("Roll: ");
    scanf("%d", &s.roll_no);

    printf("Marks: ");
    scanf("%f", &s.marks);

    // Output
    printf("Name: %s | Roll: %d | Marks: %.0f\n", s.name, s.roll_no, s.marks);

    return 0;
}
