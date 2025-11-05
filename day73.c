#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char filename[50] = "sample.txt";
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    // Open the file in read mode
    file = fopen(filename, "r");

    // Check if file opened successfully
    if (file == NULL) {
        printf("Error: Could not open file %s!\n", filename);
        return 1;
    }

    // Read each character until EOF
    while ((ch = fgetc(file)) != EOF) {
        characters++;
