#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);  // Read full name (with spaces)

    int len = strlen(name);
    if (name[len - 1] == '\n')  // Remove newline if present
        name[len - 1] = '\0';

    char *words[20];  // To store parts of the name
    int count = 0;

    // Split the name by spaces
    char *token = strtok(name, " ");
    while (token != NULL) {
        words[count++] = token;
        token = strtok(NULL, " ");
    }

    // Print initials for all words except last (surname)
    for (int i = 0; i < count - 1; i++) {
        printf("%c.", toupper(words[i][0]));
    }

    // Print surname in full
    printf(" %s\n", words[count - 1]);

    return 0;
}
