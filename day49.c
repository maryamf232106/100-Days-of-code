#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);  // Read full line including spaces

    printf("Initials: ");
    for (int i = 0; i < strlen(name); i++) {
        // Print first letter of the name and letters after spaces
        if (i == 0 || name[i - 1] == ' ') {
            if (name[i] != ' ' && name[i] != '\n')
                printf("%c.", toupper(name[i]));
        }
    }

    printf("\n");
    return 0;
}
