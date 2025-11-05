#include <stdio.h>

int main() {
    FILE *file;
    char filename[50] = "data.txt";
    char text[200];

    // Open the existing file in append mode
    file = fopen(filename, "a");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error: Could not open file %s!\n", filename);
        return 1;
    }

    // Get new text to append
    printf("Enter text to append: ");
    getchar(); // To clear the newline character left by previous input
    fgets(text, sizeof(text), stdin);

    // Append text to file
    fputs(text, file);

    // Close the file
    fclose(file);

    printf("File updated successfully with appended text.\n");

    return 0;
}
