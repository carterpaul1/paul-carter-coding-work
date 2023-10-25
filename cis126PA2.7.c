// Paul Carter
// 10/12/2023
// Performance Assessment 2.7 - Years of service

# include <stdio.h>

int main()
{
	float years;
	char doItAgain = 'y';
	
	while(doItAgain == 'y')
	{
	
		printf("How many years of employement do you have with the company?");
		scanf(" %f", &years);
	
		if(years >= 25)
		{
			printf("You recive a gold watch!\n");
		}
	
		else if(years < 25 && years > 15)
		{
			printf("You recive a silver pen\n");
		}
	
		else if(years <= 15 && years > 5)
		{
			printf("You recive an attractive pin\n");
		}
	
		else
		{
			printf("You receive a pat on the back\n");
	
		}
	printf("Do you want to input another years of service?(y/n):\n");
	scanf(" %c", &doItAgain);
}
	return 0;
}
