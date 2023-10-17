#include <stdio.h>
#include <string.h>

void eliminateCommonCharacters(char string1[], char string2[]) {
    while (1) {
        int common = 0;
        for (int i = 0; string1[i] != '\0'; i++) {
            for (int j = 0; string2[j] != '\0'; j++) {
                if (string1[i] == string2[j]) {
                    // Remove the common character from both strings
                    for (int k = j; string2[k] != '\0'; k++) {
                        string2[k] = string2[k + 1];
                    }
                    for (int k = i; string1[k] != '\0'; k++) {
                        string1[k] = string1[k + 1];
                    }
                    common = 1;
                    break;
                }
            }
            if (common) {
                break;
            }
        }
        if (!common) {
            break;
        }
    }
    printf("Resulting string 1: %s\n", string1);
    printf("Resulting string 2: %s\n", string2);
}

int main() {
    char string1[100] = "aneesh";
    char string2[100] = "vaanya";

    eliminateCommonCharacters(string1, string2);
    return 0;
}
