#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int number, original, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    while (number > 0) {
        digit = number % 10;
        sum += factorial(digit);
        number /= 10;
    }

    if (sum == original)
        printf("%d is a Strong Number.\n", original);
    else
        printf("%d is not a Strong Number.\n", original);

    return 0;
}
