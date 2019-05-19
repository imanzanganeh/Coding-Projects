// Iman Arfa-Zanganeh CS 50
#include <stdio.h>//header file

int main(int argc, char *argv[]) 
{
	int rows;////Indicates rows in for loop
	int columns;//Indicates columns in for loop
	int spaces;//Indicates spaces in for loop
	int power = 1;// Indicates power/exponent(2) in for loop. Initialized to 1
	for (rows = 0; rows <= 7; rows++)//outer for loop for rows of triangle
	{
		printf("    ");
		for (columns = 1; columns <= 7 - rows; columns++)//inner for loop for spaces of triangle
		{
			printf("  ");
		}
		for (columns = 0; columns <= rows; columns++)//inner for loop for left half of triangle(columns for the left half of triangle)
		{
			if (columns == 0)//if statement for first column of each row of triangle
			{
				printf(" %d", 1);
			}
			else
			{
				power = power * 2;//calculates powers of 2 for left half of triangle
				printf(" %d", power);
			}
		}
		for (columns = rows - 1; columns >= 0; columns--)//inner for loop for right half of triangle(columns for the right half of triangle)

		{
			if (columns == 7)//if statement for last column of each row of triangle
			{
				printf(" %d", 1);
			}
			else 
			{
				power = power/2;//calculates powers of 2 for right half of triangle
				printf(" %d", power);
			}
		}
		printf("\n");
	}
}// main method