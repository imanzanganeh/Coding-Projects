#include <stdio.h>

int main(int argc, char *argv[]) 
{
	int amount, bn100, bn50, bn20, bn10, bn5, bn2, bn1;
	printf("Input the amount: ");
	scanf("%d", &amount);
	bn100 = amount/100;
	bn50 = (amount - bn100 * 100)/50;
	bn20 = (amount - bn100 * 100 - bn50 * 50)/20;
	bn10 = (amount - bn100 * 100 - bn50 * 50 - bn20 * 20)/10;
	bn5 = (amount - bn100 * 100 - bn50 * 50 - bn20 * 20 - bn10 * 10)/5;
	bn2 = (amount - bn100 * 100 - bn50 * 50 - bn20 * 20 - bn10 * 10 - bn5 * 5)/2;
	bn1 = (amount - bn100 * 100 - bn50 * 50 - bn20 * 20 - bn10 * 10 - bn5 * 5 - bn2 * 2)/1;
	printf("%d Note(s) of 100.00", bn100);
	printf("\n");
	printf("%d Note(s) of 50.00", bn50);
	printf("\n");
	printf("%d Note(s) of 20.00", bn20);
	printf("\n");
	printf("%d Note(s) of 10.00", bn10);
	printf("\n");
	printf("%d Note(s) of 5.00", bn5);
	printf("\n");
	printf("%d Note(s) of 2.00", bn2);
	printf("\n");
	printf("%d Note(s) of 1.00", bn1);
}