#include <stdio.h>

int main() {
    FILE *srcFile, *destFile;
    char srcName[50], destName[50];
    char ch;

    // Take filenames as input
    printf("Enter source file name: ");
    scanf("%s", srcName);

    printf("Enter destination file name: ");
    scanf("%s", destName);

    // Open source file in read mode
    srcFile = fopen(srcName, "r");
    if (srcFile == NULL) {
        printf("Error: Could not open source file!\n");
        return 1;
    }

    // Open destination file in write mode
    destFile = fopen(destName, "w
