#include <stdio.h>

int main() {
    FILE *file;
    char line[100];

    // Open the existing file in read mode
    file = fopen("info.txt", "r");

    // Check if the file exists or opens successfully
    if (file == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    // Read and print each line until EOF
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    // Close the file
    fclose(file);

    return 0;
}
