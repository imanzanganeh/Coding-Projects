//Iman Arfa-Zanganeh CS 50
#include <stdio.h>
#include <string.h>
#define ARRAY_SIZE 40//Constant for max length of string. ARRAY_SIZE is set at 40 for testing purposes, can change to any other length if need be
int main()
{
	char word[ARRAY_SIZE];//array for string of size 40
	printf("Please enter a string: ");
	fgets(word, ARRAY_SIZE, stdin);//function that reads an input string from the console. First parameter is the array word where the input will be stored; 2nd parameter is the constant and maximum size of word which is ARRAY_SIZE; 3rd parameter is the parameter where the input is coming from which is standard input, or stdin(assuming the input comes from the keyboard)

	printf("\n");
	printf("Input:           %s", word);
	int wordLength = strlen(word);//variable that holds the length of the string in word 
	if(wordLength % 2 == 0)//if statement to check if the length of the string is an even amount of characters. If the condition is not met, then control passes to the else statement
	{
		printf("Output:          ");
		for(int i = 0; i < wordLength/2; i++)//for loop for first half of the string
		{
			printf("%c", word[i]);
		}
		printf("\n                 ");
		for(int i = wordLength/2; i < wordLength; i++)//for loop for second half of the strong
		{
			printf("%c", word[i]);
		}
	}
	else//else statement for if the condition in the if statement is not met. If the condition in the if statement is not met, then the length of the string is odd
	{
		printf("Output:          ");
		for(int i = 0; i < wordLength/2; i++)//for loop for first half of the string
		{
			printf("%c", word[i]);
		}
		printf("\n                 ");
		for(int i = wordLength/2; i < wordLength; i++)//for loop for second half of the strong
		{
			printf("%c", word[i]);
		}
	}
	return 0;
}