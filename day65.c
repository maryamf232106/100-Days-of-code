#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    int count[26] = {0};  // for 'a' to 'z'
    int i;

    printf("Enter first string: ");
    gets(s);

    printf("Enter second string: ");
    gets(t);

    // if lengths differ, not anagrams
    if (strlen(s) != strlen(t)) {
        printf("Not Anagram\n");
        return 0;
    }

    // count frequency of each character in s
    for (i = 0; s[i] != '\0'; i++)
        count[s[i] - 'a']++;

    // subtract frequency for characters in t
    for (i = 0; t[i] != '\0'; i++)
        count[t[i] - 'a']--;

    // check if all counts are zero
    for (i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
