#include <stdio.h>
#include <string.h>
#include <ctype.h>

void countAlphabets(char str[]) {
    int alphabetCount[26] = { 0 };

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            alphabetCount[tolower(str[i]) - 'a']++;
        }
    }
    printf("Alphabet Count:\n");
    for (int i = 0; i < 26; i++) {
        if (alphabetCount[i] > 0) {
            printf("%c : %d\n", i + 'a', alphabetCount[i]);
        }
    }
}
int main() {
    char inputString[100];
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = 0;
    countAlphabets(inputString);
    return 0;
}
