#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int count = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character to find its frequency: ");
    scanf(" %c", &ch);  // space before %c to ignore newline

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch)
            count++;
    }

    printf("Output: %d\n", count);
    return 0;
}
