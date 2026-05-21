#include <stdio.h>

int main()
{
    int secret = 7;
    int guess;

    printf("Guess the number (1 to 10): ");
    scanf("%d", &guess);

    if(guess == secret)
    {
        printf("Correct! You won!");
    }
    else
    {
        printf("Wrong guess! The correct number was %d", secret);
    }

    return 0;
}
