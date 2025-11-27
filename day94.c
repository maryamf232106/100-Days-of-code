#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

// Function that accepts structure as parameter
void printStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %.2f\n",
           s.name, s.roll, s.marks);
}

int main() {
    struct Student st;

    printf("Enter student details:\n");

    printf("Name: ");
    fgets(st.name, sizeof(st.name), stdin);
    st.name[strcspn(st.name, "\n")] = '\0';

    printf("Roll: ");
    scanf("%d", &st.roll);

    printf("Marks: ");
    scanf("%f", &st.marks);

    // Calling the function
    printStudent(st);

    return 0;
}
