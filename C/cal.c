// Iman Arfa-Zanganeh CS 50
#include <stdio.h>

int main(int argc, char *argv[]) 
{
	int input1, input2;
	printf("Enter an integer: ");
	scanf("%d",&input1);
	printf("\n");
	printf("Enter another integer: ");
	scanf("%d", &input2);
	printf("\n");
	int sum = input1 + input2;
	printf("%d + %d = %d\n", input1, input2, sum);
	printf("\n");
	int difference = input1 - input2;
	printf("%d - %d = %d", input1, input2, difference);
}