#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    int length, upper = 0, lower = 0, digit = 0, special = 0;
    int score = 0;

    printf("====================================\n");
    printf("       PASSWORD STRENGTH ANALYZER\n");
    printf("====================================\n");

    printf("Enter your password: ");
    fgets(password, sizeof(password), stdin);

    // Remove newline character
    password[strcspn(password, "\n")] = '\0';

    length = strlen(password);

    for (int i = 0; i < length; i++) {
        if (isupper(password[i]))
            upper++;
        else if (islower(password[i]))
            lower++;
        else if (isdigit(password[i]))
            digit++;
        else
            special++;
    }

    // Calculate score
    if (length >= 8)
        score += 2;

    if (length >= 12)
        score += 1;

    if (upper > 0)
        score += 1;

    if (lower > 0)
        score += 1;

    if (digit > 0)
        score += 1;

    if (special > 0)
        score += 1;

    printf("\n----------- ANALYSIS -----------\n");

    printf("Password length       : %d\n", length);
    printf("Uppercase letters     : %d\n", upper);
    printf("Lowercase letters     : %d\n", lower);
    printf("Digits                : %d\n", digit);
    printf("Special characters   : %d\n", special);

    printf("\nStrength: ");

    if (score <= 2) {
        printf("WEAK\n");
        printf("Suggestion: Use a longer password with numbers and symbols.\n");
    }
    else if (score <= 4) {
        printf("MEDIUM\n");
        printf("Suggestion: Add more character types and increase the length.\n");
    }
    else if (score <= 5) {
        printf("STRONG\n");
        printf("Good password! Increasing the length can make it even better.\n");
    }
    else {
        printf("VERY STRONG\n");
        printf("Excellent! Your password meets most strength requirements.\n");
    }

    printf("--------------------------------\n");

    return 0;
}
