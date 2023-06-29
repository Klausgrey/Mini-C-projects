
#include <stdio.h>

int main()
{
    int num, n, i = 5;
    printf("Welcome to a guessing game where you guess a number that's on my mind.\nAre you ready?\n");
    printf("Enter 1 for yes or 2 to exit: ");
    scanf("%d", &num);

    if (num == 2)
    {
        printf("You selected 2. Alright, come again when you want to play. Goodbye!\n");
        return 0;
    }
    else if (num == 1)
    {
        printf("Alright, it's time to play.\n");
    }

    printf("What number is on my mind from 1 - 10? ");
    scanf("%d", &n);

    if (n != i)
    {
        printf("Oops, wrong! Try again.\n");
        printf("You have 1 more trial.\n");
        n = 0;

        printf("What number is on my mind from 1 - 10? ");
        scanf("%d", &n);

        if (n != i)
        {
            printf("Oops, wrong! This is your last chance.\n");
        }
        else
        {
            printf("Good job! It's %d.\n", i);
            return 0;
        }

        n = 0;
        printf("What number is on my mind from 1 - 10? ");
        scanf("%d", &n);

        if (n != i)
        {
            printf("Oops, wrong! It was 5. Better luck next time. Goodbye!!\n");
        }
        else
        {
            printf("Good job! It's %d.\n", i);
        }
    }

    return 0;
}
