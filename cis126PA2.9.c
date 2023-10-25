// Paul Carter
// 10/12/2023
// Performance Assessment 2.9 - Passscode

# include <stdio.h>

int main()
{
	int passcode = 11862;
	int guess = 0;
	int userGuess;
	
	while(guess < 3)
	{
		printf("What is the passcode?\n");
		scanf(" %d", &userGuess);
		
		if(userGuess== passcode)
		{
			printf("That guess is correct!\n");
			break;
		}
		else
		{
			printf("That guess is incorrect!\n");
			guess++;
			if(guess < 3)
			{
				printf("Please try again:\n ");
				
			}
		}
			
	}
	
	if(guess == 3)
	{
		printf("You have exceeded the allowed attempts!\n");
	}
	return 0;
}
