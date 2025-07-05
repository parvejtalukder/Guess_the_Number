#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, guess, t = 10;

    srand(time(NULL)); 
    num = rand() % 10; 
    printf("   Guess the number!\n");
    printf("   ----| 0 to 10 |---- ");
    printf("   -----------------\n");

    while (t--)
    {
        printf("*| %d Times Available |*\n", t + 1);
        printf("\nEnter Your Number: ");
        scanf("%d", &guess);

        if (guess == num)
        {
            printf("\nHurrey! You're Right.\n");
            return 0; 
        }
        else
        {
            printf("\nOhh! You Are Wrong.\n");
        }
    }

    printf("\nSorry! You failed. The correct number was: %d\n", num);
    return 0;
}
