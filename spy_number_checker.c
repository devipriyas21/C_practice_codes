#include <stdio.h>

int main() {
    int number, original, digit;
    int sum = 0, product = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    while (number > 0) {
        digit = number % 10;
        sum += digit;
        product *= digit;
        number /= 10;
    }

    if (sum == product)
        printf("%d is a Spy Number.\n", original);
    else
        printf("%d is not a Spy Number.\n", original);

    return 0;
}
