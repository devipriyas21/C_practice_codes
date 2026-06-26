#include <stdio.h>

int main() {
    int n, rev = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    if (rev == n)
        printf("%d is a palindrome.\n", n);
    else
        printf("%d is not a palindrome.\n", n);

    return 0;
}
