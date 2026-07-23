#include <stdio.h>
#include <ctype.h>

int main() {
    char str[500];
    int alphabet[26] = {0};
    int i, isPangram = 1;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            char ch = tolower(str[i]);
            alphabet[ch - 'a'] = 1;
        }
    }

    for (i = 0; i < 26; i++) {
        if (alphabet[i] == 0) {
            isPangram = 0;
            break;
        }
    }

    if (isPangram)
        printf("The given sentence is a Pangram.\n");
    else
        printf("The given sentence is not a Pangram.\n");

    return 0;
}
