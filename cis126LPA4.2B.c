// Paul Carter
// 10/24/2023
// Performance Assessment 4.2 -Airline lab


#include <stdio.h>

#define NUM_SEATS 11

int isSeatAvailable(int seatNumber, int seats[]) {
    return seats[seatNumber] == 0;  // Returns 1 if seat is available, 0 otherwise
}

int main() {
    int seats[NUM_SEATS] = {0};  // Puts 0s in all the cells
    int seatsSold = 0, seatChoice, seatNumber;
    

    while (seatsSold < 10 ||seatChoice != 1) {
        printf("Please type 1 for first-class or 2 for economy: \n");
        scanf("%d", &seatChoice);
        
        while(seatChoice !=1 && seatChoice !=2)
        {
        	printf("That is an invaild opition\n");
        	printf("Please type 1 for first-class or 2 for economy: \n");
            scanf("%d", &seatChoice);
		}

        int seatAssigned = 0;  // Flag to check if a seat is assigned in the current loop iteration

        if (seatChoice == 1) { // First Class Seats
            for (seatNumber = 1; seatNumber < 6; seatNumber++) {
                if (isSeatAvailable(seatNumber, seats)) {
                    printf("Boarding pass: Seat %d in first-class.\n", seatNumber);
                    seats[seatNumber] = 1;  // Mark seat as taken
                    seatsSold++;
                    seatAssigned = 1;
                    break;
                }
                
            }
        

            if (!seatAssigned) {
                printf("First-class is full. Would you like to switch to economy? (1 for Yes, 0 for No): \n");
                scanf("%d", &seatChoice);
                if (seatChoice == 1) {
                    printf("Switching to economy...\n");
                } else if (seatChoice == 0) {
                    printf("Next flight leaves in 3 hours.\n");
                    break;
                } else {
                    printf("Invalid choice. Exiting.\n");
                    break;
                }
            }
            
        } else if (seatChoice == 2) { // Economy
            for (seatNumber = 6; seatNumber < 11; seatNumber++) {
                if (isSeatAvailable(seatNumber, seats)) {
                    printf("Boarding pass: Seat %d in economy.\n", seatNumber);
                    seats[seatNumber] = 1;  // Mark seat as taken
                    seatsSold++;
                    seatAssigned = 1;
                    break;
                }
            }

            if (!seatAssigned) {
                printf("Economy class is full. Would you like to switch to first-class? (1 for Yes, 0 for No): \n");
                scanf("%d", &seatChoice);
                if (seatChoice == 1) {
                    printf("Switching to first-class...\n");
                } else if (seatChoice == 0) {
                    printf("Next flight leaves in 3 hours.\n");
                    break;
                } else {
                    printf("Invalid choice. Exiting.\n");
                    break;
                }
            }
        } else {
            printf("Invalid choice. Exiting.\n");
            break;  // Invalid choice, exit the loop
        }

        if (seatsSold == 10) {
            printf("Thank you for flying with us! The flight is now full.\n");
            
        }
    }

    return 0;
}



