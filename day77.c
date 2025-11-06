#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fin, *fout;
    char ch;

    fin = fopen("input.txt", "r");  // open input file in read mode
    if (fin == NULL) {
        printf("Error: Cannot open input.txt\n");
        return 1;
    }

    fout = fopen("output.txt", "w");  // open output file in write mode
    if (fout == NULL) {
        printf("Error: Cannot open output.txt\n");
        fclose(fin);
        return 1;
    }

    while ((ch = fgetc(fin)) != EOF) {
        if (islower(ch))
            ch = toupper(ch);  // convert lowercase to uppercase
        fputc(ch, fout);
    }

    printf("File converted successfully. Check output.txt\n");

    fclose(fin);
    fclose(fout);

    return 0;
}
