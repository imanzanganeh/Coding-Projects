//Iman Arfa-Zanganeh CS50
#include <stdio.h>

int main()
{
	float balance;//Indicates balance that is inputted by user and is modified after program is executed
	float deposit;//Indicates amount to deposit into balance
	float withdraw;//Indicates withdrawl amount from balance
	char input;//Used for user input of transaction type
	printf("BANK ACCOUT PROGRAM!\n");
	printf("----------------------------------\n");
	printf("Enter the old balance: ");
	scanf(" %f", &balance);//User input for balance amount
	if(balance >= 0)//Outer if statement to check if balance is postive number
	{
		printf("Enter the transactions now.\n");
		printf("Enter an F for the transaction type when you are finished.\n");
		do//Do-while loop to deal with transactions
		{
			printf("Transaction Type (D=deposit, W=withdrawal, F=finished): ");
			scanf(" %c", &input);//User input for transaction type
			if (input == 'D')//Inner if statement for user choosing to deposit
			{
				printf("Amount: ");
				scanf("%f", &deposit);//User input for deposit amount
				if (deposit > 0)//Second Inner if statement to check if deposit amount is positive
					balance = balance + deposit;// Adds deposit to balance
			}
			if (input == 'W')//Inner if statement for user choosing to withdraw
			{
				printf("Amount: ");
				scanf("%f", &withdraw);//User input for withdrawl amount
				if (withdraw > 0)//Second inner if statement to check if withdrawl amount is positive
					balance = balance - withdraw;// Withdraws from balance(subtracts amount inputed from balance)
			}
			if (input == 'F')//Inner if statement for user choosing to finish
			{
				printf("\n");
				printf("Your ending balance is $%.2f", balance);
				printf("\n");
				printf("Program is ending");
			}

		}while(input != 'F');//End of do-while loop
	}// End of outer if statement
return 0;
}// main