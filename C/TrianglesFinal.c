#include <stdio.h>

int main(int argc, char *argv[]) 
{
	int rows;
	int spaces;
	int stars;
	printf("\n Triangle A:\tTriangle B:\tTriangle C:\tTriangle D:\n");
	for(rows = 0; rows < 10; rows++)
	{
		for (stars = 0; stars <= rows; stars++)
		{
			printf("*");
		}
		for (spaces = 10; spaces > rows + 1; spaces--)
		{
			printf(" ");
		}
		printf("t");
		for (stars = 10; stars > rows; stars--)
		{
			printf("*");
		}
		for (spaces = 0; spaces < rows; stars--)
		{
			printf(" ");
		}
		printf("\t");
		for(spaces = 0; spaces < rows; spaces++)
		{
			printf(" ");
		}
		for (stars = 10; stars > rows; stars--)
		{
			printf("*");
		}
		printf("\t");
		for (spaces = 10; spaces > rows + 1; spaces--)
		{
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}