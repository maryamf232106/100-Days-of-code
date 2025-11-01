#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, i;

    printf("Enter a string: ");
    gets(str);  // reads a line (including spaces)

    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // convert to lowercase for simplicity
        if (ch >= 'a' && ch <= 'z') { // check if it's a letter
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels=%d, Consonants=%d", vowels, consonants);

    return 0;
}
