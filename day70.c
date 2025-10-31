#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i;

    printf("Enter a string: ");
    gets(str);  // Read the input string

    // Convert to sentence case (capitalize each word)
    for(i = 0; str[i] != '\0'; i++) {
        if(i == 0 || str[i - 1] == ' ') {
            str[i] = toupper(str[i]);   // Capitalize first letter of word
        } else {
            str[i] = tolower(str[i]);   // Lowercase rest
        }
    }

    printf("Sentence Case: %s\n", str);
    return 0;
}
