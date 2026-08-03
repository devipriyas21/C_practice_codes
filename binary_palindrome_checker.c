#include <stdio.h>
#include <string.h>

int main() {
    int number, temp, i = 0;
    char binary[32];

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Please enter a non-negative number.\n");
        return 0;
    }

    temp = number;

    if (temp == 0) {
        strcpy(binary, "0");
    } else {
        while (temp > 0) {
            binary[i++] = (temp % 2) + '0';
            temp /= 2;
        }
        binary[i] = '\0';

        // Reverse the binary string
        for (int j = 0; j < i / 2; j++) {
            char ch = binary[j];
            binary[j] = binary[i - j - 1];
            binary[i - j - 1] = ch;
        }
    }

    int left = 0, right = strlen(binary) - 1;
    int isPalindrome = 1;

    while (left < right) {
        if (binary[left] != binary[right]) {
            isPalindrome = 0;
            break;
        }
        left++;
        right--;
    }

    printf("Binary Representation: %s\n", binary);

    if (isPalindrome)
        printf("%d is a Binary Palindrome.\n", number);
    else
        printf("%d is not a Binary Palindrome.\n", number);

    return 0;
}
