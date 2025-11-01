#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[26] = {0};  // For lowercase letters a-z
    int i, index;
    char repeat = '\0';

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        index = str[i] - 'a';  // Get position in alphabet (0–25)
        freq[index]++;
        if (freq[index] == 2) {  // Found repeating character
            repeat = str[i];
            break;
        }
    }

    if (repeat)
        printf("Output: %c\n", repeat);
    else
        printf("No repeating character\n");

    return 0;
}
