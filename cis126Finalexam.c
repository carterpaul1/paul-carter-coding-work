// Paul Carter
// 10/30/2023
// Final Exam - Hansen's Discount Supermarket

#include <stdio.h>
#include <stdbool.h>

#define MAX_ITEMS 100 // max number of items

float calculateTotalWithTax(float total); // prototype

bool isValidInput(int numItems);

int main()
{
    char welcomeMessage[] = "Welcome to Hansen's Discount Supermarket";
    char thankYouMessage[] = "Thank you for Shopping at Hansen's Discount Supermarket today.\n";
    float itemPrices[MAX_ITEMS];
    int numItems;
    int i;
    float totalWithTax;
    char doItAgain = 'y';

    while (1) // Infinite loop
    {
        float totalSales = 0; // Reset totalSales for a new transaction

        puts(welcomeMessage);
        printf("\n");

        printf("Enter the number of items to scan: ");

        while (scanf("%d", &numItems) != 1 || !isValidInput(numItems))
        {
            // Clear the input buffer
            while (getchar() != '\n');

            printf("Invalid input. Please enter a valid number (up to 100): ");
        }

        while (numItems > MAX_ITEMS)
        {
            if (numItems > MAX_ITEMS)
            {
                printf("Sorry, that number is not valid. Please enter a number less than %d\n", MAX_ITEMS);
                printf("Please enter the number of items to scan:\n");
                scanf("%d", &numItems);
            }
            else
            {
                printf("That is an invalid input. Please enter a valid number:\n");
                printf("Please enter the number of items to scan: ");
                scanf("%d", &numItems);
            }
        }

        printf("Sorry, the scanner is broken at the moment. You have to enter the prices manually.\n");

        for (i = 0; i < numItems; i++)
        {
            do
            {
            	printf("\nYou will enter the price for the item that is greater then $0.00 and less than 10.00");
                printf("\nPlease enter the price for the item %d $", i +1);
                scanf("%f", &itemPrices[i]);

                // Check if the item price is invalid
                if (itemPrices[i] > 10.00)
                {
                    printf("Invalid price! Please enter a value less than $10.00\n");
                }
                else if (itemPrices[i] < 0.00)
                {
                    printf("Invalid price! Please enter a non-negative value.\n");
                }
            } while (itemPrices[i] < 0.00 || itemPrices[i] > 10.00);

            // Accumulate total sales
            totalSales += itemPrices[i];
        }

        // Calculate total with sales tax
        totalWithTax = calculateTotalWithTax(totalSales);

        printf("\nTotal Sales: $%.2f\n", totalSales);
        printf("Total Sales with Sales Tax: $%.2f\n", totalWithTax);
        puts(thankYouMessage);

        // Provide a way to break out of the loop
        printf("Do you want to perform another transaction? (y/n): ");
        scanf(" %c", &doItAgain);

        if (doItAgain != 'y')
        {
            break; // Exit the loop if the user doesn't want another transaction
        }
    }

    return 0;
}

bool isValidInput(int numItems)
{
    return numItems > 0 && numItems <= MAX_ITEMS;
}

float calculateTotalWithTax(float total)
{
    const float SALES_TAX_RATE = 0.06;
    return total + (total * SALES_TAX_RATE);
}

