#include <stdio.h>

int main() {
    int number, temp;
    int hasZero = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Please enter a positive number.\n");
        return 0;
    }

    temp = number;

    while (temp > 0) {
        if (temp % 10 == 0) {
            hasZero = 1;
            break;
        }
        temp /= 10;
    }

    if (hasZero)
        printf("%d is a Duck Number.\n", number);
    else
        printf("%d is not a Duck Number.\n", number);

    return 0;
}
