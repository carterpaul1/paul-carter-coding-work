// Paul Carter
// 10/10/2023
// Performance Assessment 2.2 - Credit Limit

# include <stdio.h>

int main()
{
	int accountNumber;
	float credits;
	float beginningBalance;
	float balance;
	float creditLimit;
	float charges;
	char doItAgain = 'y';
	
	while(doItAgain == 'y')
	{
	
		printf("Enter an account number :");
		scanf("%d", &accountNumber);
			
		printf("Enter the beginning balance: \n");
		scanf(" %f", &beginningBalance);
	
		printf("Enter the total charges: \n");
		scanf(" %f", &charges);
	
		printf("Enter the credits \n");
		scanf(" %f", &credits);
	
		printf("Enter the credit limit: \n");
		scanf(" %f", &creditLimit);
		
	
		
		
		balance = beginningBalance + charges - credits;
		
		if(balance < creditLimit)
		{
			printf("Account number: %d \n", accountNumber);
			printf("Credit limit: %.2f \n", creditLimit);
			printf("Balance: %.2f \n", balance);
			printf("You still have credit to use.\n");
		}
		else
		{
			printf("Account number: %d \n", accountNumber);
		printf("Credit Limit: %.2f \n", creditLimit),
		printf("Balance: %.2f \n", balance);
		printf("You have exceeded your credit Limit\n");
		
		
	}
	printf("Do you want to enter another account number(y/n):\n");
		scanf(" %c", &doItAgain);
}
	
	


	return 0;
}
