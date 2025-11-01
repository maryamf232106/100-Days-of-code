#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);  // read input string

    for (i = 0; str[i] != '\0'; i++) {
        // if character is lowercase (a-z)
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // convert to uppercase (ASCII difference)
        }
    }

    printf("Uppercase string: %s", str);

    return 0;
}
