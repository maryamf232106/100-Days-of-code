#include <stdio.h>
#include <string.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    char input[20];
    enum Role role;

    printf("Enter role (ADMIN / USER / GUEST): ");
    scanf("%s", input);

    // Convert input string to enum value
    if (strcmp(input, "ADMIN") == 0)
        role = ADMIN;
    else if (strcmp(input, "USER") == 0)
        role = USER;
    else if (strcmp(input, "GUEST") == 0)
        role = GUEST;
    else {
        printf("Invalid role!\n");
        return 1;
    }

    // Display message
    switch (role) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome User! Limited access granted.\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
    }

    return 0;
}
