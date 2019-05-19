//Iman Arfa-Zanganeh CS50
#include <stdio.h>//Header File
#define size 10//constant for number of student scores
int main(int argc, char *argv[]) 
{
	int i;//variable for counter in for loop header
	int min;//variable for min score
	int max;//variable for max score
	float sum = 0;// variable for sum of student scores
	float avg;// variable for average of student scores
	float arr[size];//array for student test scores of size 10
	printf("Please input student scores one at a time.");
	printf("\n");
	for (i = 0; i < size; i++)//for loop for user input of student scores into array
	{
		printf("Student %d : ", i + 1);
		scanf("%f", &arr[i]);//user inputs student scores
		if (arr[i] < 0 || arr[i] > 100)// checks if student score is below 0 or above 100. Prompts user to try inputting again if condition is true
		{
			printf("Try again!\n");
			i--;
		}
		sum = sum + arr[i];//calculates sum of student scores
	}
	min = arr[0];//set min as first score in array. Min is set as first score for testing purposes, can set min to any other element in the array if need be
	max = arr[size - 1];//set max as last score in array. Max is set as last score for testing purposes; can set max to any other element in the array if need be
	for (i = 0; i < size; i++)// for loop to find minimum student score
	{
		if (arr[i] < min)//if statement to check if there is any value that is lower than the min test value. Switches the value with the min test value if condition is true
		{
			min = arr[i];
		}
	}
	for (i = 0; i < size; i++)//for loop to find maximum student score
	{
		if (arr[i] > max) //if statement to check if there is any value that is greater than the max test value. Switches the value with the max test value if condition is true
		{
			max = arr[i];
		}
	}
	avg = sum/size;//calculates average of student scores
	printf("\n");
	printf("***************final result ***************");
	printf("\n");
	printf("                The minimum score is %d", min);
	printf("\n");
	printf("                The maximum score is %d", max);
	printf("\n");
	printf("                The average score is %.0f", avg);
}//main method