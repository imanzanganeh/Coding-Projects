//Iman Arfa-Zanganeh CS 50
#include <stdio.h>
#include <stdlib.h>

void printFile(char** userNames, char** passWords, int storeData, char console);// function prototype to write the files
char** readFile(char* fileName, int* n);// function prototype to read the files

void printFile(char** userNames, char** passWords, int storeData, char console)// function declaration to print the files(the usernames and passwords)
{
	FILE *filePointer; // pointer called filePointer to open a file
	filePointer = fopen("usernamesPasswords.txt", "w"); //fopen to open the file in writing mode
 
	if(!filePointer)// if statement to check if the file has not been opened
	{ 
			printf("usernamesPasswords.txt file could not be created!");
			exit(0); // exit the function and the program. Can't use return since the function printFile does not return anything
	}
 	printf("\n");
	for(int i = 0; i < storeData; i++)// for loop to write the usernames and passwords into the file
	{
		fprintf(filePointer, "%s\t%s\n", userNames[i], passWords[i]);
		if(console == 'y')// if statement to check if user had choosen to print the statement
		{
	 		printf("%s\t%s\n", userNames[i], passWords[i]);
		}
	}
	fclose(filePointer); // fclose to close the file
}

char** readFile(char* fileName, int* storeData)// function declaration to read the files(the usernames and passwords)
{
	FILE *filePointer; // pointer called filePointer to open a file
	filePointer = fopen(fileName, "r"); // fopen to open the file in read mode
 
	if(!filePointer)// if statement to check if file is not opened. If not, then function returns 0 and prints that it is not found
	{
			printf("%s file is not found", fileName);
			return 0;
	}
	char readChar; // Variable to hold the current character that has been read
	int numLines = 1; // variable to hold the number of lines in the file. Set to 1 to account for the last line in the file
	while(!feof(filePointer))// while statement to check that EOF has not been reached
	{
		readChar = fgetc(filePointer); // fgetc that reads in every char from the file and sets it equal to readChar
		if(readChar == '\n')// if statement to check if there is a new line characte. Increments the numLines variable if found
		{
			numLines++;
		}
	}
 
	char** stringData = (char**) malloc(numLines * sizeof(char*));// variable that is a pointer in memory with an allocated size by function malloc. Used to allocate the proper amount of memory for the usernames and passwords
	for(int i = 0; i < numLines; i++)// for loop to store the strings from the username and password files, and to make sure that it is in the correct place in memory
	{
		stringData[i] = (char*) malloc(sizeof(char));
	}
	fseek(filePointer, 0, SEEK_SET); // fseek to set the file pointer to the beginning of the file
	for(int i = 0; i < numLines; i++)// for loop to read all the lines within the string of data
	{
		fscanf(filePointer, "%s", stringData[i]);
	}
	fclose(filePointer); // fclose to close the file completely
	*storeData = numLines; // data holds the number of lines of the file
	return stringData;
}

int main() 
{
	int storeData;// variable to store all the data with respect to the sizing of the program
	char** userNames = readFile("usernames.txt", &storeData); // variable to read the usernames
	char** passWords = readFile("passwords.txt", &storeData); // variable to read the passwords
	printf("Would you like to print usernames and passwords on console? Press y for yes and n for no");
	printf("\n");
	printFile(userNames, passWords, storeData, getc(stdin)); // function call to printFile method to print out the usernames and passwords
	return 0;
}