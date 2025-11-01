#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0}; // frequency array for all ASCII chars
    int i;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // If lengths differ, they can't be anagrams
    if (strlen(str1) != strlen(str2)) {
        printf("Not anagrams\n");
        return 0;
    }

    // Count frequency of characters in str1
    for (i = 0; str1[i] != '\0'; i++)
        freq[(int)str1[i]]++;

    // Subtract frequency for characters in str2
    for (i = 0; str2[i] != '\0'; i++)
        freq[(int)str2[i]]--;

    // Check if all frequencies are zero
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("Not anagrams\n");
