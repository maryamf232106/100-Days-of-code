#include <stdio.h>
#include <string.h>

enum Operation {
    ADD,
    SUBTRACT,
    MULTIPLY
};

int main() {
    char opStr[20];
    int a, b;
    enum Operation op;

    printf("Enter operation (ADD / SUBTRACT / MULTIPLY) followed by two numbers:\n");
    scanf("%s %d %d", opStr, &a, &b);

    // Convert string to enum
    if (strcmp(opStr, "ADD") == 0)
        op = ADD;
    else if (strcmp(opStr, "SUBTRACT") == 0)
        op = SUBTRACT;
    else if (strcmp(opStr, "MULTIPLY") == 0)
        op = MULTIPLY;
    else {
        printf("Invalid operation!\n");
        return 1;
    }

    // Perform operation
    switch (op) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }

    return 0;
}
