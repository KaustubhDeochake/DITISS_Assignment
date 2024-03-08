#include <stdio.h>
#include <string.h>

int compstri(char *str1, char *str2) {
    return strcmp(str1, str2);
}

int main() {
    char *strings[] = { "iphone", "samsung", "oneplus", "samsung", "motorola", "iphone" };
    int numStrings = sizeof(strings) / sizeof(strings[0]);
    char *duplicates[numStrings];
    int numDuplicates = 0;
    for (int i = 0; i < numStrings; i++) {
        for (int j = i + 1; j < numStrings; j++) {
            if (compstri(strings[i], strings[j]) == 0) {
                duplicates[numDuplicates] = strings[i];
                numDuplicates++;
                break;
            }
        }
    }
    printf("Duplicated Strings:\n");
    for (int i = 0; i < numDuplicates; i++) {
        printf("%s\n", duplicates[i]);
    }
    return 0;
}
