#include <stdio.h>

int main() {
    int number, square, temp;

    printf("Enter a number: ");
    scanf("%d", &number);

    square = number * number;
    temp = number;

    while (temp > 0) {
        if ((temp % 10) != (square % 10)) {
            printf("%d is not an Automorphic Number.\n", number);
            return 0;
        }
        temp /= 10;
        square /= 10;
    }

    printf("%d is an Automorphic Number.\n", number);

    return 0;
}
