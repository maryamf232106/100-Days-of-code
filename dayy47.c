#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char word[50], longest[50] = "";
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (str[len - 1] == '\n')
        str[len - 1] = '\0';  // remove newline

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';  // end current word
            if (j > maxLen) {
                maxLen = j;
                strcpy(longest, word);
            }
            j = 0;  // reset for next word
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    printf("Longest word: %s\n", longest);
    return 0;
}
