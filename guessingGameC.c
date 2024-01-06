//guess a randomly generated number (3 difficulty settings)
//replay the game, display how many tries it took to win the game, 2 player mode option
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int level, answer, tries, random, originaltries, replay, mode;

    time_t t;

    do{

        printf("Welcome to the game of guessing\n");
        printf("Select a mode 1: single player | 2: two players\n");
        scanf("%d", &mode);

        if (mode == 1)
        {
            printf("Choose a level between 1 and 4\n");
            scanf("%d", &level);

            while (level > 4 || level < 1)
            {
                printf("Your choice is invalid, please choose a level between 1 and 4!\n");
                scanf("%d", &level);
            }

            switch (level)
            {
                case 1:
                    printf("U chose the level ~EASY~(0-10)!\n");
                    srand((unsigned) time(&t));
                    random = rand() % 11;
                    break;

                case 2:
                    printf("U chose the level ~MEDIUM~(0-50)!\n");
                    srand((unsigned) time(&t));
                    random = rand() % 51;
                    break;
        
                case 3:
                    printf("U chose the level ~HARD~(0-100)!\n");
                    srand((unsigned) time(&t));
                    random = rand() % 101;
                    break;

                case 4:
                    printf("U chose the level ~ULTRA HARD~(0-1000)\n");
                    srand((unsigned) time(&t));
                    random = rand() % 1001;
                    break;
            }
        }

        else if (mode == 2)
        {
            do
            {
                printf("Player 1, select a positive number to guess\n");
                scanf("%d", &random);
            }while(random < 0);
        }

        else
        {
            while(mode != 1 || mode != 2)
            {
                printf("Select a mode 1: single player | 2: 2 players\n");
                scanf("%d", &mode);
            }
        }

            printf("Set a number of tries!\n");
            scanf("%d", &tries);
            originaltries = tries;

            printf("Type in your guess!\n");
            while (tries > 0)
            {
                scanf("%d", &answer);
                tries--;

                if (answer < random)
                {
                    printf("Your guess is smaller than the number!\n");
                }

                else if (answer > random)
                {
                    printf("Your guess is bigger than the number!\n");
                }

                else
                {
                    printf("Congrats, you guessed it:)\n");
                    printf("It took u %d out of %d tries to win the game\n", originaltries - tries, originaltries);
                    break;
                }
            }
            if (answer != random)
            {
                printf("...GAME OVER... the number was %d!\n", random);
            }
        printf("Do u wanna play again? 0-no 1-yes\n");
        scanf("%d", &replay);
    }while (replay == 1);
    
    return 0;
}