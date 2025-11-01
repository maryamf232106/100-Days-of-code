#include <stdio.h>

int main() {
    char str[100];
    int count = 0, i = 0;

    printf("Enter a string: ");
    gets(str);  // read input string

    while (str[i] != '\0') {  // loop until null character
        count++;
        i++;
    }

    printf("Total characters: %d", count);

    return 0;
}
