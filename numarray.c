// Paul Carter
// 10/29/2023

# include <stdio.h>
# include <time.h>
# include <stdbool.h>


int main() {
    char doItAgain = 'y';

    while (doItAgain == 'y') {
        srand(time(NULL));

        int num[5];
        int userInput;
        int count;
        bool match = false;

        for (count = 0; count < 5; count++) {
            num[count] = rand() % 5 + 1;
            
        }

        printf("\nEnter a number to see if it is in the num array: ");
        scanf("%d", &userInput);

        for (count = 0; count < 5; count++) {
            if (userInput == num[count]) {
                match = true;
                break;  // Break out of the loop once a match is found
            }
        }

        if (match) {
            printf("The number is in the num array! Good job!\n");
        } else {
            printf("The number is not in the num array!\n");
        }

        printf("Do you want to try another number to see if it's in the num array? (y/n): ");
        scanf(" %c", &doItAgain);  
}
    return 0;
}


