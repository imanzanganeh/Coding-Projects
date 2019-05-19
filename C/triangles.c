//Iman Arfa-Zanganeh CS 50
#include <stdio.h>

int main(int argc, char *argv[])
{
	
	int r;//Indicates the rows in for loop
	int blankSpace; //Indicates spaces in for loop
	int stars;//Indicate the stars that are printed in for loop

	printf("\n(A)");
	printf("\t\t(B)");
	printf("\t\t(C)");
	printf("\t\t\t(D)\n");
	for(r = 0; r < 10; r++)//Outer loop iterates 10 times since 10 rows are being made for each triangle
	{
		for(stars = 0; stars <= r; stars++)//Inner loop prints stars for triangle A
		{  
		printf("*");
		}
		for(blankSpace = 10; blankSpace > r + 1; blankSpace--)//Inner loop prints blanks in relation to how many rows their are - 1. Used for triangle A
		{
		printf(" ");
		}
		printf("\t");//Tab to create extra space between triangle A and triangle B
		for(stars = 10; stars > r; stars--)//Inner loop prints stars for triangle B
		{
		printf("*");
		}
		for(blankSpace = 0; blankSpace < r; blankSpace++)//Inner loop prints blanks in relation to how many rows their are - 1. Used for triangle B
		{
		printf(" ");
		}
		printf("\t");//Tab to create extra space between triangle B and triangle C
		for(blankSpace = 0; blankSpace < r; blankSpace++)//Inner loop prints blanks in relation to how many rows their are - 1. Used for triangle C
		{
		printf(" ");
		}
		for(stars = 10; stars > r; stars--)//Inner loop prints stars for triangle C
		{
		printf("*");
		}
		printf("\t");//Tab to create extra space between triangle C and triangle D
		for(blankSpace = 10; blankSpace > r + 1; blankSpace--)//Inner loop prints blanks in relation to how many rows their are - 1. Used for triangle D
		{
		printf(" ");
		}
		for(stars = 0; stars <= r; stars++)//Inner loop prints stars for triangle D
		{
		printf("*");
		}
		printf("\n");//Skips lines for every iteration of outer for loop(skips 10 times)
	}//End of outer for loop
	return 0;
}// main