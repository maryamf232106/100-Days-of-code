#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, j, k, len, maxLen = 0, found;

    printf("Enter a string: ");
    gets(s);  // simple input for beginners

    len = strlen(s);

    for(i = 0; i < len; i++) {
        for(j = i; j < len; j++) {
            found = 0;
            // check if character repeats between i and j
            for(k = i; k < j; k++) {
                if(s[k] == s[j]) {
                    found = 1;
                    break;
                }
            }
            if(found)
                break;
            if(j - i + 1 > maxLen)
                maxLen = j - i + 1;
        }
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);

    return 0;
}
