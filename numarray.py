# Paul Carter
# 10/29/2023
# num array

import random

do_it_again = 'y'

while do_it_again == 'y':
    num = [random.randint(1, 5) for _ in range(5)]

    # Input validation for integers
    while True:
        try:
            user_input = int(input("Enter a number to see if it's in the num array: "))
            break  # Break out of the loop if conversion to int is successful
        except ValueError:
            print("Invalid input. Please enter a valid integer.")

    match = user_input in num

    if match:
        print("The number is in the array! Good job!")
    else:
        print("The number is not in the array!")

    do_it_again = input("Do you want to try another number to see if it's in the num array? (y/n): ").lower()

    while do_it_again != 'y' and do_it_again != 'n':
        print("That is an invalid choice. Please try again.")
        do_it_again = input("Do you want to try another number to see if it's in the num array? (y/n): ").lower()

print("End of the program! Thank you for using the program!")



                    
                          
    
    
