// Iman Arfa-Zanganeh
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) 
{
	printf("Welcome to the game of Guess it!\nI will choose a number between 1 and 200.\n");
	printf("You will try to guess that number.\n");
	printf("If you guess wrong, I will tell you if you have guessed too high or too low.\nYou have 5 tries to get the number.");
	printf("OK, I am thinking of a number.  Try to guess it.\n");
	int input = 'y';
	while(input == 'y')
		{
	int i = 1, compGuess, playerGuess;
	scanf("%d", &playerGuess);
	while ((playerGuess < 1 && playerGuess > 200 ))
	{
		printf("Illegal guess. Your guess must be between 1 and 200.\nTry again. Your guess?\n");
		scanf("%d", &playerGuess);
	}
	compGuess = rand() % 200 + 1;
	
		while (compGuess != playerGuess && i < 5)
		{
			printf("%d", compGuess);
			if (compGuess < playerGuess)
			{
				printf("Too high!\n");
				scanf("%d", &playerGuess);
				i++;
			}
			else if (compGuess > playerGuess)
			{
				printf("Too low!\n");
				scanf("%d", &playerGuess);
				i++;
			}
			else
			{
				printf("**** CORRECT ****\n");
			}
		}
		if (compGuess == playerGuess)
			{
				printf("Want to play again?\n");
				input = getchar();
				while(input == '\n' || input == EOF) 
					input = getchar();
				while(input != 'y' && input != 'n')
				{
					printf("invalid input.  Want to play again?\n");
					input = getchar();
					while(input == '\n' || input == EOF) // When you press enter, it takes enter as an input
						input = getchar();
				}
				if (input == 'n')
				{
					printf("Goodbye, it was fun. Play again soon.");
				}
			}
		if (compGuess != playerGuess)
			{
				printf("You are out of tries.  You lose.  Want to play again?\n");
				int input = getchar();
				while(input == '\n' || input == EOF) 
					input = getchar();
				while(input != 'y' && input != 'n')
				{
					printf("invalid input.  Want to play again?");
					input = getchar();
					while(input == '\n' || input == EOF) 
						input = getchar();
				}
				if (input == 'n')
				{
					printf("Goodbye, it was fun. Play again soon.");
					return 0;
				}
			}
	}
	return 0;
}