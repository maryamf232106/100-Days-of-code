#include <stdio.h>

int main() {
    FILE *file;
    char name[50];
    int age;

    // Open the file in write mode
    file = fopen("info.txt", "w");

    // Check if file opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Take user input
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);

    // Write to the file
    fprintf(file, "Name: %s\nAge: %d\n", name, age);

    // Close the file
    fclose(file);

    // Display success message
    printf("File created successfully! Data written to info.txt\n");

    return 0;
}
