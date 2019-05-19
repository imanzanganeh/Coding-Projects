//Iman Arfa-Zanganeh CS50

#include <stdio.h>

enum _rank// Enumeration types for the rankings of a card, where the enumeration starts as a value of 2 instead of 0. The assumption is made that jack will be considered as an int equal to 11, queen an int equal to 12, king an int equal to 13, and ace an int equal to 14
{
	two = 2, three, four, five, six, seven, eight, nine, ten, jack, queen, king, ace
};

struct card// structure for a playing card. Contains its suit and rank
{ 
	char cardSuit;//type char variable that represents the suit of a card
	enum _rank cardRank;// variable with enum type _rank to represent the rank of a card
};

char *stringRep(struct card deck);//function prototype for function named stringRep. Has formal parameter of an array named deck that is of type struct card

void perfectShuffle(struct card originalDeck[]);//function prototype for function named perfectShuffle. Has formal parameter of an array named originalDeck that is of type struct card

char *stringRep(struct card deck)//function prototype for function named stringRep. Has formal parameter of an array named deck that is of type struct card
{
	switch (deck.cardRank)// switch statement used to return a string representation of the ranks of a playing card. Case jack, queen, king, and ace are all under the assumption that they are ints that are 11, 12, 13, 14 respectively
	{
		case 2: 
			return "2";
		case 3: 
			return "3";
		case 4: 
			return "4";
		case 5: 
			return "5";
		case 6: 
			return "6";
		case 7: 
			return "7";
		case 8: 
			return "8";
		case 9: 
			return "9";
		case 10: 
			return "10";
		case jack: 
			return "J";
		case queen: 
			return "Q";
		case king: 
			return "K";
		case ace: 
			return "A";
		default :
			return NULL;
	}
}

void perfectShuffle(struct card shuffledDeck[])//function header for function named perfectShuffle. Has formal parameter of an array named originalDeck that is of type struct card
{ 
	struct card copy[52];//array named copy that is of type struct card. Used to represent a copy of the original deck
	for (int i = 0; i < 52; i++)// for loop to copy contents of shuffledDeck to copy array. At this point in time, shuffledDeck has not been actually shuffled yet, so therefore it currently contains the contents of the original, unshuffled deck 
	{
		copy[i] = shuffledDeck[i];
	}
	for (int i = 0; i < 26; i++)//for loop to perform perfect shuffle on array shuffledDeck
	{ 
		shuffledDeck[i * 2] = copy[i];
		shuffledDeck[2 * i + 1] = copy[i + 26];
	}
}

int main() 
{
	struct card originalDeck[52];//array named originalDeck that is of type struct card. Used to represent the original, unshuffled deck of cards
	struct card shuffledDeck[52]; //array named shuffledDeck that is of type struct card. Used to represent the deck of cards once it has been perfectly shuffled. Due to the deck not being shuffled yet, it currently contains the same original, unshuffled contents of originalDeck
	for (int i = 0; i < 52; i++)//for loop to add all 52 cards' ranks and suits 
	{ 			
		if (i >= 0 && i < 13)//if statement to add the first 13 cards, as well as their ranks and suits
		{
			originalDeck[i].cardSuit = 'c';
			shuffledDeck[i].cardSuit = 'c';
			originalDeck[i].cardRank = i + 2;
			shuffledDeck[i].cardRank = i + 2;
		}
		else if (i > 12 && i < 26)// else if statement to add the next 13 cards, as well as their ranks and suits
		{
			originalDeck[i].cardSuit = 'd';
			shuffledDeck[i].cardSuit = 'd';
			originalDeck[i].cardRank = i - 11;
			shuffledDeck[i].cardRank = i - 11;
		}
		else if (i > 25 && i < 39)// else if statement to add the next 13 cards, as well as their ranks and suits
		{
			originalDeck[i].cardSuit = 'h';
			shuffledDeck[i].cardSuit = 'h';
			originalDeck[i].cardRank = i - 24;
			shuffledDeck[i].cardRank = i - 24;
		}
		else //else statemenet to add the last 13 cards, as well as their ranks and suits
		{
			originalDeck[i].cardSuit = 's';
			shuffledDeck[i].cardSuit = 's';
			originalDeck[i].cardRank = i - 37;
			shuffledDeck[i].cardRank = i - 37;
		}
	}
	perfectShuffle (shuffledDeck); //function call to the perfectShuffle function with actual parameter of array shuffledDeck. Sends in array shuffledDeck for it to be perfectly shuffled

	printf("\t     Original deck");
	printf("\n\n");
		
	for (int i = 0; i < 52; i++)//for loop to print original deck
	{
		if (i == 12 || i == 25 || i == 38 || i == 51)// if statement to print the original deck, and to check if index is at every 13th element in array in order to perform a line skip for readibility. Function call to Stringrep is made; array originalDeck is sent to be represented as a string so that it can be printed
		{
			printf("%c%s ",originalDeck[i].cardSuit, stringRep(originalDeck[i]));
			printf("\n");
		}
		else// else statement to print the original deck besides elements 12, 25, 38, and 51(those are printed in the if statement above). Function call to Stringrep is made; array originalDeck is sent to be represented as a string so that it can be printed
		{
			printf("%c%s ",originalDeck[i].cardSuit, stringRep(originalDeck[i]));
		}
	}
	printf("\n\n");
	printf("\t     Shuffled deck");
	printf("\n\n");
	for (int i = 0; i < 52; i++)//for loop to print shuffled deck
	{
		if (i == 12 || i == 25 || i == 38 || i == 51)// if statement to print the shuffledDeck, and to check if index is at every 13th element in array in order to perform a line skip for readibility. Function call to Stringrep is made; array shuffledDeck is sent to be represented as a string so that it can be printed
		{
			printf("%c%s ",shuffledDeck[i].cardSuit, stringRep(shuffledDeck[i]));
			printf("\n");
		}
		else 
		{
			printf("%c%s ",shuffledDeck[i].cardSuit, stringRep(shuffledDeck[i]));// else statement to print the shuffled deck besides elements 12, 25, 38, and 51(those are printed in the if statement above). Function call to Stringrep is made; array shuffledDeck is sent to be represented as a string so that it can be printed
		}
	}
	int configs = 1;//represents the number of configurations shuffledDeck goes through after every perfect shuffle. Already happened once, as the function performShuffle for array shuffledDeck was already called above one time
	for (int i = 0; i < 52; i++)//for loop to check the number of configurations needed in order for shuffledDeck to return to its original configuration
	{
		if (originalDeck[i].cardSuit != shuffledDeck[i].cardSuit || originalDeck[i].cardRank != shuffledDeck[i].cardRank)//if statement to check if the suits and ranks of the original deck is the same as the suits and ranks of the shuffledDeck. If not, then the function perfectShuffle is called again with actual parameter of array shuffledDeck in order to perform another perfect shuffle to see if shuffledDeck will return to its original configuration. This continues until ShuffledDeck returns to its orignal configuration. The number of configurations are incremented every time it is done so
		{
			perfectShuffle(shuffledDeck);
			configs++;
		}
	}
	printf("\n");
	printf("In total, %d perfect shuffles are needed in order to change the configuration of the deck back to the original one\n", configs);

	return 0;
}