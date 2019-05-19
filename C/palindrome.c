//Iman Arfa-Zanganeh CS 50
#include <stdio.h>
#include <string.h>
#define ARRAY_SIZE 100//Constant for max length of string. ARRAY_SIZE is set at 100 for testing purposes, can change to any other length if need be

int palindrome(char inputStr[]);//function prototype for function name palindrome. Has a formal parameter of a char array(or string) named inputStr

int main()
{
	char word[ARRAY_SIZE];//array for string of size 40
	printf("Let's check if a string is a palindrome\n");
	printf("Please give me your string : ");
	fgets(word, ARRAY_SIZE, stdin);//function that reads an input string from the console. First parameter is the array word where the input will be stored; 2nd parameter is the constant and maximum size of word which is ARRAY_SIZE; 3rd parameter is the parameter where the input is coming from which is standard input, or stdin(assuming the input comes from the keyboard)
	if(palindrome(word))//if statement to check if palindrome function returns true, i.e returns the value 1
	{
		 printf("Yes, it is a palindrome");
	}
	else//else statement for if the condition in the if statement is not met. If the condition in the if statement is not met, then the function palindrome returns false, i.e returns the value 0
	{
		 printf("No, it is not a palindrome");
	}
  
	return 0;
}

int palindrome(char inputStr[])//function header for function name palindrome. Has a formal parameter of a char array(or string) named inputStr
{
	int len = strlen(inputStr);//variable that holds the length of the string in inputStr
	int isPalindrome = 1;//variable that represents if the string is a palindrome or not. If isPalindrome is equal to 1 as assigned here, then the string is a palindrome, and the function will return 1. If isPalindrome changes to 0, then the string is not a palindrome, and the function will return 0.
	for(int i = 0; i < len; i++)//for loop to check the chars in inputStr. Goes up to the last element in inputStr
	{
		 
		 if(inputStr[i] >= 'A' && inputStr[i] <= 'Z')//if statement that checks if any char in inputStr is uppercase. If so, the char is then converted from upper case convert to lower case
		 {
			inputStr[i] = inputStr[i] + 32;
		 }
	}
	for(int i = 0; i < len/2; i++)//for loop to check the chars in inputStr. Goes up to the middle element in inputStr to prevent redundancy, as if all the chars on the left half of the string matches the right half of the string,then it is automatically a palindrome. No need to check the right half of the string to see if it matches the left half of the string, therefore the loop stops at the middle element to prevent it from happening
	{
		 if(inputStr[i] != inputStr[len-i-2])//if statement that checks if the ith element in the left half of the string is not equal to the element that is complementary to it by index(the ith element in the right half of the string essentially) in the right half of the string. If condition is met, then isPalindrome = 0;
		 {
			isPalindrome = 0;
		 }
	}
	if(isPalindrome == 1)//if statement that checks if isPalindrome equals 1. If it does, the function will return the value 1
	{
		return 1;
	}
	else//else statement that checks if isPalindrome equals 0. If it does, the function will return the value 0
	{
		return 0;
	}
}