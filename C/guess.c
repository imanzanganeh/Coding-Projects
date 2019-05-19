// Iman Arfa-Zanganeh CS 50

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {

    int input = 'y';
    printf("Welcome to the game of Guess it!\nI will choose a number between 1 and 200.\n");
	printf("You will try to guess that number.\n");
	printf("If you guess wrong, I will tell you if you have guessed too high or too low.\nYou have 5 tries to get the number.\n");
    while(input == 'y') {
	printf("\nOK, I am thinking of a number. Try to guess it.\n");
	printf("\nYour guess? ");
	int i=1, compGuess, playerGuess;
	srand(time(NULL));
	compGuess = rand() % 200 + 1;
	printf("%d", compGuess);
	scanf("%d", &playerGuess);
	while ((playerGuess < 1 || playerGuess > 200))
	{
	    printf("Illegal guess. Your guess must be between 1 and 200.\nTry again. Your guess? ");
	    scanf("%d", &playerGuess);
	}
	while (compGuess != playerGuess && i < 5)
	{
	    if (compGuess < playerGuess)
	    {
		printf("Too high!");
		printf("\nYour guess? ");
		scanf("%d", &playerGuess);
		i++;
	    }
	    else if (compGuess > playerGuess)
	    {
		printf("Too low!");
		printf("\nYour guess? ");
		scanf("%d", &playerGuess);
		i++;
	    }
	}
	if(compGuess == playerGuess)
	{
	    printf("*** CORRECT ***\n");
	    printf("Want to play again? ");
	    getchar();
		input = getchar();
	    if (input == 'n')
	    {
		printf("Goodbye, it was fun. Play again soon.");
	    }
	}
	if (compGuess != playerGuess)
	{
	    printf("You are out of tries. You lose. Want to play again? ");
	    getchar();
		input = getchar();
	    if (input == 'n')
	    {
		printf("Goodbye, it was fun. Play again soon.");
		return 0;
	    }
	}
    }

    return 0;
}
