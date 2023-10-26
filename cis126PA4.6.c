// Paul Carter
// 10/26/2023
// Performance Assessment 4.6 - Passing an Array to function

# include <stdio.h>

int computeTotal(int scores[], int size);

int main()
{
	int scores[9];
	int counter;
	
	printf("You will enter the score for each hole.\n");
	
	for(counter = 0; counter <9; counter++)
	{
		printf("Enter the score for the %d hole\n",counter + 1);
		scanf("%d", &scores[counter]);
		
	}
	
	int totalScore = computeTotal(scores, 9);
	
	printf("Scores for each hole\n");
	for(counter = 0; counter < 9; counter++)
	{
		printf("Hole %d: %d\n", counter +1, scores[counter]);
		
	}
	
	printf("Overall Total Score: %d\n", totalScore);
	
	if(totalScore < 45)
	{
		printf("Congratulations! You won this time!\n");
	}
	else
	{
		printf("Better luck next time!\n");
	}
	
	return 0;
}

int computeTotal(int scores[], int size)
{
	int total = 0;
	int counter;
	
	for(counter = 0; counter  < size; counter++)
	{
		total += scores[counter];
		
	}
	return total;
}
