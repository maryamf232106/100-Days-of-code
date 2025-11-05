#include <stdio.h>

int main() {
    FILE *file;
    char filename[50], ch;

    // Ask the user for a filename
    printf("Enter filename: ");
    scanf("%s", filename);

    // Try to open the file in read mode
    file = fopen(filename, "r");

    // Check if file exists
    if (file == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    printf("File opened successfully.\n");
    printf("File content:\n");

    // Read and display file content character by character
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(file);

    return 0;
}
