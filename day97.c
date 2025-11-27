#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee emp;
    FILE *fp;

    // Input employee details
    printf("Enter employee details:\n");

    printf("Name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    emp.name[strcspn(emp.name, "\n")] = '\0';

    printf("ID: ");
    scanf("%d", &emp.id);

    printf("Salary: ");
    scanf("%f", &emp.salary);

    // Write to binary file
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee data saved to 'employee.dat'.\n");

    // Read from binary file
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fread(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("\nEmployee data read from file:\n");
    printf("Name: %s | ID: %d | Salary: %.2f\n", emp.name, emp.id, emp.salary);

    return 0;
}
